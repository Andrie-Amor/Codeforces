#!/usr/bin/env bash
set -euo pipefail

build_log="$(mktemp "${TMPDIR:-/tmp}/cf-build.XXXXXX.log")"
if ! cmake --build build --target cf >"$build_log" 2>&1; then
  echo "Build failed:"
  cat "$build_log"
  rm -f "$build_log"
  exit 1
fi
rm -f "$build_log"
./build/cf < input.txt | tee output.txt
