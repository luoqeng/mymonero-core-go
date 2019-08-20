package mymonero

// #cgo LDFLAGS: -L${SRCDIR}/../build/lib -Wl,-Bstatic -lmymonero -lboost_system -lboost_thread -lstdc++ -Wl,-Bdynamic -lpthread
// #include <stdlib.h>
// #include "bridge/mymonero.h"
import "C"
import "unsafe"

func CallFunc(fnName, args string) string {
	fnNameCStr := C.CString(fnName)
	argsCStr := C.CString(args)
	defer C.free(unsafe.Pointer(fnNameCStr))
	defer C.free(unsafe.Pointer(argsCStr))

	ret := C.call_func(fnNameCStr, argsCStr)
	defer C.free(unsafe.Pointer(ret))
	return C.GoString(ret)
}
