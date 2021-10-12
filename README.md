# TestGcovr

Repository for testing gcovr.

Instructions

```
mkdir build & cd build
cmake ..
gcovr . --xml coverage.xml --xml-pretty --exclude-unreachable-branches --print-summary --root .. --verbose --filter ../src
```
