#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch2/catch.hh"
#include "data_structure.hh"

#include <iostream>
using namespace std;

TEST_CASE( "Test the computing of the median", "[median]" ) {
    int i;
    DataStructure data;

    SECTION( "Trying with 0..8 numbers (odd)" ) {
        int n = 9;
        int numbers[n] = {3, 5, 0, 8, 7, 6, 4, 2, 1};
        for (i = 0; i < n; i++) {
            data.add(numbers[i]);
        }
        
        REQUIRE( data.median() == 4.0 );
    }
    
    SECTION( "Trying with 0..7 numbers (even)" ) {
        int n = 8;
        int numbers[n] = {3, 5, 0, 7, 6, 4, 2, 1};
        for (i = 0; i < n; i++) {
            data.add(numbers[i]);
        }
        
        REQUIRE( data.median() == 3.5 );
    }
    
    SECTION( "Trying with -10.0..5.0 (decimals and negatives)" ) {
        int n = 21;
        float numbers[n] = {-4.75, -7.75, -7.0, 0.5, -2.5, -5.5, -9.25, 5.0, -0.25, -1.75, -10.0, 2.0, -4.0, -1.0, 3.5, -3.25, -8.5, 4.25, 2.75, 1.25, -6.25};
        for (i = 0; i < n; i++) {
            data.add(numbers[i]);
        }
        
        REQUIRE( data.median() == -2.5 );
    }
}
