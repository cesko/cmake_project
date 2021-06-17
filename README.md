cmake_project
=============

Template for CMake C++ Project

**Author:** Christian Koch

Dependencies
------------

The project was built and tested on Ubuntu 20.04 LTS with the following dependencies:
 - CMake 3.16.3
 - Boost 1.71 ( For Tests )

Build
-----

From the project root directory tun
```mkdir build && cd build```
```cmake ..```
```make```

Run the example
---------------
The demo executable is created in the `build` directory. launch with

```./build/foo_demo```

Tests
-----
The project includes unit tests (*Boost.Tests*).

The tests are organized within the `test` directory.

The tests are also built with CMake using a dedicated `CMakeLists.txt` to keep the workspace well organised. The executable is built in `build/test/foo_tests`.
