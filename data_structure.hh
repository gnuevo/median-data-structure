#include <iostream>
#include <list>
#include <iterator>
using namespace std;

#ifndef DATA_STRUCTURE
#define DATA_STRUCTURE

class DataStructure {
    list <float>::iterator median_ptr;
    list <float> memory;
public:
    DataStructure();
    void add(float number);
    float median();
    void show();
    ~DataStructure();
};

#endif
