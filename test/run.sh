#!/bin/bash

{
    cmake --build ./build
    ./build/test
} || {
    ./build.sh
    cmake --build ./build
    ./build/test
}
