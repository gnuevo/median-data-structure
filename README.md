Data Structure
==============

This code has been done following these instructions:

+ [x] A data structure that allows two operations:
    + `add`ing a number to the structure.
    + Calculating the `median`.
+ [x] Automatic tests.
+ [ ]`add` and `median` operators with minimum time complexity.

## Files

+ `data_structure.cpp` and `data_structure.hh` contain the description and logic implementation of the requested data structure.
+ `main.cpp`, a simple example of use.
+ `tests.cpp`, tests file.

## Compile and run

First clone the repository. And `cd` to it.

    cd data_structure

Then execute

    mkdir build
    cd build
    cmake ..
    make

After the compilation you'll find two executable files

    build/data_structure
    build/tests

Run the first one tos execute the code in the `main.cpp` file. The second one runs the tests.

## Notes on implementation and optimisation

### Suboptimal solution

Currently, numbers are stored in a `list<float>` structure in which numbers are added in its correspondant position. This is clearly suboptimal, as tracing the list to find the right position for a new element is (on average) time consuming for long lists.

The part in charge of computing the median is quite optimal, though. At any moment, an iterator is kept pointing to the median position in the list. For every new number added the iterator is kept actualised to the right position. Therefore, the time required to compute the median is independant of the lenght of the list.

### A more optimal solution

The solution explained above is clearly suboptimal for long lists of numbers. But a more optimal solution can be developed. Here we propose the following.

Keeping a list ordered is very time consuming. Finding the rigth position for any new element is an operation whose time complexity depends on the length of the list itself. So we could instead organise the numbers using a balanced tree. That would help to find the position of each element much faster.

Additionally, I propose to keep all the elements in a linked list as well. Therefore keeping the computation of the median very fast.
