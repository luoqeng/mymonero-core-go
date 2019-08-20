# mymonero-core-go
A central interface for initial critical light wallet functions backed by a slightly customized minimal vendored Monero C++ src

Macos
```
$ brew install boost
$ brew link boost
```

New command for users on macOS High Sierra as it is not possible to chown on /usr/local:
```
$ sudo chown -R $(whoami) $(brew --prefix)/*
$ mkdir /usr/local/include
$ mkdir /usr/local/lib
$ brew link boost
$ cd /usr/local/lib
$ ln -s libboost_thread-mt.a libboost_thread.a
$ ln -s libboost_thread-mt.dylib libboost_thread.dylib
```

Ubuntu
```
$ sudo apt install libboost-all-dev
```

CentOS
```
$ sudo   yum groupinstall 'Development Tools'
$ sudo  yum install centos-release-scl
$ sudo  yum install devtoolset-7

$ scl enable devtoolset-7 bash # source /opt/rh/devtoolset-7/enable

$ sudo yum install epel-release
$ sudo yum install cmake3

$ sudo yum install boost-devel
$ sudo yum install boost-static
$ sudo ln -s /usr/lib64/libboost_thread-mt.a /usr/lib64/libboost_thread.a
```

```
$ git clone https://github.com/luoqeng/mymonero-core-go
$ cd mymonero-core-go
$ ./bin/update_submodules
$ mkdir build
$ cd build
$ cmake ..
$ make -j4

$ cd ../test
$ go test
```
