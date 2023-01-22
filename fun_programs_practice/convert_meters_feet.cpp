#include <iostream>
#include <cstdio>
#include <string>

using namespace std;



int main() {
    double unit_in ;
    double unit_out ;
    bool condition_valid_input = true ;
    string unit_convert ;

    cout << "YO HomeSlice. This program will input yo fancy ass meters and give you some of 'em imperial feet\n" ;
    do {
        cout << "Please enter the unit to convert from [M/F]: " ;
        getline(cin, unit_convert) ;
        if (unit_convert == "M" || unit_convert =="F") {
            condition_valid_input = false ;
        }
        else {
            cout << "ERROR: Please enter a valid input, either M or F\n" ;
        }
    }
    while (condition_valid_input) ;
    cout << "Please enter some number of meters (you can include centimeters after the dot): " ;
    cin >> unit_in ;
    if (unit_convert == "M") {
        unit_out = unit_in * 3.28084 ;
    }
    else {
        unit_out = unit_in / 3.28084 ;
    }
    printf("Yo your %f meters equates to %f feet\n", unit_in, unit_out) ;
    return 0;
}

