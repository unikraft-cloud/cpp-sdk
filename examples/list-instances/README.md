# List existing instances example

This directory contains an example of how to list instances on Unikraft Cloud
using the C++ SDK.

## Prerequisites

Start by signing up to [Unikraft Cloud](https://unikraft.cloud/signup) and
retrieving an access token.

### Linux Debian/Ubuntu

```
sudo apt-get install -y --no-install-recommends \
  build-essential \
  ca-certificates \
  cmake \
  libcpprest-dev \
  libssl-dev \
  make
```

## Building

Start by cloning this repository, `cd`ing into this directory and then:

```
mkdir build
cd build
cmake ..
make
```
