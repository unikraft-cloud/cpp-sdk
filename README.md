# C++ API client

This is the API of the [Unikraft Cloud Platform](https://unikraft.cloud).

| :memo: | This C++ SDK is a work-in-progress and is subject to change. API endpoints, structures and methods will evolve over time and there may be breaking changes between releases. Please give us your feedback in [Discord](https://unikraft.cloud/discord) or [Issues](https://github.com/unikraft-cloud/cpp-sdk/issues)! |
|-|:-|

## Overview
This API client was generated by the [OpenAPI Generator](https://openapi-generator.tech) project. By using the [OpenAPI spec](https://openapis.org) from a remote server, you can easily generate an API client.

- API version: 0.6.0
- Generator version: 7.9.0-SNAPSHOT
- Build package: org.openapitools.codegen.languages.CppRestSdkClientCodegen
For more information, please visit [https://unikraft.cloud/contact](https://unikraft.cloud/contact)

- API namespace: cloud.unikraft.v1.api
- Model namespace: cloud.unikraft.v1.model

## Installation

### Prerequisites

Install [cpprestsdk](https://github.com/Microsoft/cpprestsdk).

- Windows: `vcpkg install cpprestsdk cpprestsdk:x64-windows boost-uuid boost-uuid:x64-windows`
- Mac: `brew install cpprestsdk`
- Linux: `sudo apt-get install libcpprest-dev`

### Build

```sh
cmake -DCPPREST_ROOT=/usr -DCMAKE_CXX_FLAGS="-I/usr/local/opt/openssl/include" -DCMAKE_MODULE_LINKER_FLAGS="-L/usr/local/opt/openssl/lib"
make
```

### Build on Windows with Visual Studio (VS2017)

- Right click on folder containing source code
- Select 'Open in visual studio'
- Once visual studio opens, CMake should show up in top menu bar.
- Select CMake > Build All.

*Note: If the CMake menu item doesn't show up in Visual Studio, CMake
for Visual Studio must be installed. In this case, open the 'Visual Studio
Installer' application. Select 'modify' Visual Studio 2017. Make sure
'Desktop Development with C++' is installed, and specifically that 'Visual
C++ tools for CMake' is selected in the 'Installation Details' section.

Also be sure to review the CMakeLists.txt file. Edits are likely required.*

## Author

info@unikraft.cloud

