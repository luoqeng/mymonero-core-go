[ -z "${GOPATH}"  ] && GOPATH=${HOME}/go

PKGPATH=${GOPATH}/src/github.com/luoqeng/mymonero-core-go
[ ! -d "${PKGPATH}"  ] && go get github.com/luoqeng/mymonero-core-go

LIBMONERO=/build/lib/libmymonero.a
if [ ! -f "${PKGPATH}${LIBMONERO}"  ]
then
    cd ${PKGPATH}
    ./bin/update_submodules
    [ ! -d build ] && mkdir build
    cd build
    cmake ..
    make -j4
    cd ../test
    go test
fi
