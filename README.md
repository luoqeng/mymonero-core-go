# mymonero-core-go
A central interface for initial critical light wallet functions backed by a slightly customized minimal vendored Monero C++ src

compile
```
./bin/update_submodules
mkdir build
cd build
cmake ..
make -j4

cd ../test
go test
```
