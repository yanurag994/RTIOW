# RTIOW (Ray Tracing in One Weekend)

This project is a ray tracer built upon the framework described in [_Ray Tracing in One Weekend_](https://raytracing.github.io/books/RayTracingInOneWeekend.html) by Peter Shirley. The goal of this project is to create a simple ray tracer from scratch, following the step-by-step instructions provided in the book.

## Table of Contents

- [Overview](#overview)
- [Prerequisites](#prerequisites)
- [Building the Project](#building-the-project)
- [Running the Project](#running-the-project)
- [License](#license)

## Overview

This ray tracer is a minimalistic implementation that demonstrates the fundamental concepts of ray tracing. It is written in C++ and uses CMake as the build system.

## Prerequisites

- C++23 compatible compiler (G++ Preferred)
- CMake 3.12 or higher

## Building the Project

1. Clone the repository:
    ```sh
    git clone https://github.com/yanurag994/RTIOW.git
    cd RTIOW
    ```

2. Create a build directory and navigate into it:
    ```sh
    mkdir build
    cd build
    ```

3. Run CMake to configure the project:
    ```sh
    cmake .. -DCMAKE_BUILD_TYPE=Release
    ```

4. Build the project:
    ```sh
    make -j
    ```

## Running the Project

After building the project, you can run the generated executable:

```sh
./RTIOW > image.ppm
```
