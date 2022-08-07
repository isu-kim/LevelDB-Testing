# LevelDB-Testing
A simple C++ code that tests LevelDB.

## Dependencies
 - [leveldb](https://github.com/google/leveldb)

## Installing LevelDB
There are two options of installing [leveldb](https://github.com/google/leveldb). (Yes there are numerous more ways however we will be using two methods.)
### Using Package Tool - Suggested 
Use `sudo apt-get install libleveldb-dev` for installing leveldb. (Yes `apt` also works, but I am used to `apt-get`)


If you install leveldb by using `apt` or `apt-get`, you can use following expression in `.cpp` codes like below.
```
#include <leveldb/db.h> // Since it is installed as a library.
```
instead of 
```
#include "leveldb/db.h"
```

### Git Cloning - Deprecated 
If you install leveldb by `git clone` ing leveldb repository, there is higher chance of you having to configure header files and path settings.

## Building Repository
This project has `CMakeLists.txt` which it automatically builds everything.
### For release mode (no -pg option)
1. `mkdir build` or any directory that you would like to put build file in.
2. `cd build`
3.  `cmake .. && cmake --build .`

If any red color comes out instead of green, something is going wrong.
### For debug purpose (with -pg option)
This will support `gdb` and `uftrace` for tracking what is going on.
1. `mkdir build` or any directory that you would like to put build file in.
2. `cd build`
3. ` cmake .. -DCMAKE_CXX_FLAGS=-pg && cmake --build .`

## Issues and PRs
### Issue
Since this is a small repository for testing LevelDB there is **no** issue format. Open issues if there is anything going on wrong with this project in a legible way.

### PR
PRs are always welcomed. No CI testing for this repo since this repo is too small. Thus feel free to PR.
