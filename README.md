# mymonero-core-go
A central interface for initial critical light wallet functions backed by a slightly customized minimal vendored Monero C++ src

compile

ubuntu
```
sudo apt install libboost-all-dev
```

mac os
```
brew install boost
brew link boost
```
New command for users on macOS High Sierra as it is not possible to chown on /usr/local:
```
sudo chown -R $(whoami) $(brew --prefix)/*
```

```
./bin/update_submodules
mkdir build
cd build
cmake ..
make -j4

cd ../test
go test
```
