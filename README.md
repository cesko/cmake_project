cmake_project
=============

Template for CMake C++ Project

**Branch Info:** Examine *Check2* instead of *Boost* for unit testing.

**Author:** Christian Koch


Dependencies
------------

The project was built and tested on Ubuntu 20.04 LTS with the following dependencies:
 - CMake 3.16.3
 - _Boost 1.71 ( For Tests )_
 

Build
-----

From the project root directory tun
```
mkdir build && cd build
```

```
cmake ..
```

```
make
```

Run the example
---------------
The demo executable is created in the `build` directory. launch with

```./build/foo_demo```

Tests
-----
The project includes unit tests (*Boost.Tests*).

The tests are organized within the `test` directory.

The tests are also built with CMake using a dedicated `CMakeLists.txt` to keep the workspace well organised. The executable is built in `build/test/foo_tests`.

Visual Studio Code
------------------
The project is targeted towards VS Code. Config files specific to this project are provided to help you getting started. 

The experience of VS code is highly customizable. Consider the following extensions:
 - Better C++ Syntax
 - C/C++
 - C/C++ Themes
 - CMake
 - CMake Tools
 - Test Explorer UI
 - Boost.Test Explorer with debug
 - CMake Test Explorer

### Configuration
The VS Code configuration files for this project are located in the directory `.vscode`. You may need to adapt these files to your own project.

### Unit Tests

VS Code can provide a UI for unit tests using the *Test Explorer UI* extension. It provides a *Testing*-tab giving an overview about your test-cases and their status, as allows running and even debugging all or single tests. It can be used with different testing frameworks, however, in this example, Boost.Tests are used. 

You will need the following extensions:
 - Test Explorer UI
 - Boost.Test Explorer with debug
 - CMake Test Explorer (maybe)

In order wo work correctly, the extension must be correctly cofnigured: In `.vscode/settings.json` set the parameter
```
    "boost-test-adapter.testExecutable": "build/test/foo_tests"
```
to point to your test executable.

After building the project, you should see the test cases appear in the "Testing" tab. If that does not work, restarting VS Code seems to help. 










