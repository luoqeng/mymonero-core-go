[ -z "${GOPATH}"  ] && GOPATH=${HOME}/go

FIRST_GOPATH=$(echo ${GOPATH}| cut -d':' -f 1)

PKG_JSONPARSE=${FIRST_GOPATH}/src/github.com/buger/jsonparser
[ ! -d "${PKG_JSONPARSE}"  ] && go get github.com/buger/jsonparser

PKG_MONERO=${FIRST_GOPATH}/src/github.com/luoqeng/mymonero-core-go
[ ! -d "${PKG_MONERO}"  ] && go get github.com/luoqeng/mymonero-core-go

LIB_MONERO=/build/lib/libmymonero.a
if [ ! -f "${PKG_MONERO}${LIB_MONERO}"  ]
then
    cd ${PKG_MONERO}
    ./bin/update_submodules
    [ ! -d build ] && mkdir build
    cd build
    cmake ..
    make -j4
    cd ../test
    go test
fi
