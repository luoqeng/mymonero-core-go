package mymonero_test

import (
	"encoding/json"
	"testing"

	"github.com/buger/jsonparser"
	"github.com/luoqeng/mymonero-core-go/src"
)

func TestGenerateKeyImage(t *testing.T) {
	args := make(map[string]string)
	args["sec_viewKey_string"] = "7bea1907940afdd480eff7c4bcadb478a0fbb626df9e3ed74ae801e18f53e104"
	args["sec_spendKey_string"] = "4e6d43cd03812b803c6f3206689f5fcc910005fc7e91d50d79b0776dbefcd803"
	args["pub_spendKey_string"] = "3eb884d3440d71326e27cc07a861b873e72abd339feb654660c36a008a0028b3"
	args["tx_pub_key"] = "fc7f85bf64c6e4f6aa612dbc8ddb1bb77a9283656e9c2b9e777c9519798622b2"
	args["out_index"] = "0"

	argsStr, err := json.Marshal(args)
	if err != nil {
		t.Fatalf("err:%s", err)
	}

	ret := mymonero.CallFunc("generate_key_image", string(argsStr))

	err_msg, err := jsonparser.GetString([]byte(ret), "err_msg")
	if err == nil {
		t.Fatalf("err_msg:%s", err_msg)
	}

	keyImage, err := jsonparser.GetString([]byte(ret), "retVal")
	if err != nil {
		t.Fatalf("parse retVal:%s", ret)
	}

	if keyImage != "ae30ee23051dc0bdf10303fbd3b7d8035a958079eb66516b1740f2c9b02c804e" {
		t.Fatalf("keyImage:%s not equality", keyImage)
	}
}
