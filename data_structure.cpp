#include <iostream>
#include <list>
#include <iterator>
#include <limits>
#include "data_structure.hh"
using namespace std;

DataStructure::DataStructure() {
};

void DataStructure::add(float number) {
    if (this->memory.size() == 0) {
        this->memory.push_back(number);
        this->median_ptr = this->memory.begin();
    } else {
        list <float>::iterator it;
        if (number >= *this->median_ptr) {
            it = this->median_ptr;
        } else {
            it = this->memory.begin();
        }
        for (it = this->memory.begin(); it != this->memory.end() && *it <= number; ++it);
        this->memory.insert(it, number);
        
        if (number >= *this->median_ptr && this->memory.size() % 2 != 0) {
            ++this->median_ptr;
        } else if (number < *this->median_ptr && this->memory.size() % 2 == 0) {
            --this->median_ptr;
        }
    }
};

float DataStructure::median() {
    if (this->memory.size() == 0) {
        // return NaN for empty list
        return std::numeric_limits<double>::quiet_NaN();
    }
    float median;
    int size = this->memory.size();
    if (size % 2 == 0) {
        median = (*this->median_ptr + *++this->median_ptr) / 2;
    } else {
        median = *this->median_ptr;
    }
    return median;
};

void DataStructure::show() {
    cout << "Showing memory" << endl;
        list <float>:: iterator it;
        for (it = this->memory.begin(); it != this->memory.end(); ++it) {
            if (it == this->median_ptr) {
                cout << "-> " << *it << "*" << endl;
            } else {
                cout << "-> " << *it << endl;
            }
        }
};

DataStructure::~DataStructure() {
};
