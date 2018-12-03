#include <iostream>
#include <list>
#include <iterator>
#include "data_structure.hh"
using namespace std;

int main(int argc, char **argv) {
    DataStructure data;
    
    // add some numbers
    data.add(1);
    data.add(1);
    data.add(0);
    data.add(2);
    data.add(9);
    data.add(5);
    data.add(5);
    data.add(-1);
    data.add(21);
    data.add(4);
    data.add(4);
    data.show();
    
    float median = data.median();
    cout << "median " << median << endl;
    return 0;
}
