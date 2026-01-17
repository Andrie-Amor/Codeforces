#!/usr/bin/env bash
set -euo pipefail

cmake --build build --target cf
./build/cf < input.txt | tee output.txt
