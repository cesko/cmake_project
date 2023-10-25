cmake_project
=============

Template for CMake C++ Project

**Branch Info:** *GoogleTest* as default unit testing framework.

**Author:** Christian Koch


Dependencies
------------

The project was built and tested on Ubuntu 20.04 LTS with the following dependencies:
 - CMake 3.16.3
 - GoogleTest (via Cmake FetchContent)
 

Build from source
-----------------

Clone with submodules using
```
git clone --recurse-submodules https://github.com/cesko/cmake_project
```

Alternatively, use the following commands to clone the submodules seperately:
```
git clone https://github.com/cesko/cmake_project
git submodule init
git submodule update
```

From the project root directory tun
```
mkdir build && cd build
cmake ..
make
```

Run the example
---------------
The demo executable is created in the `build` directory. launch with

```./build/foo_demo```

Tests
-----
The project includes unit tests (*GoogleTest*).

The tests are organized within the `test` directory.

The tests are also built with CMake using a dedicated `CMakeLists.txt` to keep the workspace well organised. The executable is built in `build/test/tests`.

Visual Studio Code
------------------
The project is targeted towards VS Code. Config files specific to this project are provided to help you getting started. 

The experience of VS code is highly customizable. Consider the following extensions:
 - Better C++ Syntax
 - C/C++
 - C/C++ Themes
 - CMake
 - CMake Tools
 - C++ TestMate

### Configuration
The VS Code configuration files for this project are located in the directory `.vscode`. You may need to adapt these files to your own project.

### Unit Tests

VS Code can provide a UI for unit tests using the *Test Explorer UI* extension. It provides a *Testing*-tab giving an overview about your test-cases and their status, as allows running and even debugging all or single tests. It can be used with different testing frameworks, however, in this example, Check2 are used. 

The default unit testing framework is *GoogleTest*, primarily as it is used with ROS2. There also seems to be good support in VS Code. *However there are alternative branches using Boost and Catch2*.

You will need the following extensions:
 - C++ TestMate

In order wo work correctly, the extension must be correctly cofnigured: In `.vscode/settings.json` set the parameter
```
    "test.executables": "build/test/tests"
```
to point to your test executable.

After building the project, you should see the test cases appear in the "Testing" tab. If that does not work, restarting VS Code seems to help. 










