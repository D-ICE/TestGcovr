# TestGcovr

Repository for testing gcovr.

Instructions:

```
mkdir build & cd build
cmake ..
make -j 6
./demos/DemoHelloWorld
gcovr . --xml coverage.xml --xml-pretty --exclude-unreachable-branches --print-summary --root .. --verbose --filter ../src
```
