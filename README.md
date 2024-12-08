# Off-by-one error in vector iteration

This example demonstrates a common off-by-one error in C++ when iterating over a `std::vector`. The loop condition `i <= 10` is incorrect; it should be `i < 10` to avoid accessing the element at index 10, which is outside the bounds of a vector of size 10. 

## How to reproduce

1. Compile and run the code in `bug.cpp`.
2. Observe the potential crash or undefined behavior caused by the out-of-bounds access.

## How to fix

Refer to the `bugSolution.cpp` file for the corrected code.  The primary fix involves changing the loop condition to `i < 10`.