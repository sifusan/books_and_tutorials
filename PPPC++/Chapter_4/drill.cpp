#include <iostream>
#include <float.h>
#include <sstream>
#include <vector>

using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::isdigit;
using std::stringstream;
using std::tolower;
using std::isspace;

int convert(double length, string unit) {
    if (unit == "cm") {
        cout << length << " " << unit << " is " << length/100.0 << " meters or " 
            << length/2.54 << " inches\n";
    }
    else if (unit == "m") {
        cout << length << " " << unit << " is " << length*100.0 << " cm\n";
    }
    else if (unit == "in") {
        cout << length << " " << unit << " is " << length*2.54 << " cm or " <<
            length/12.0 << " feet\n";
    }
    else if (unit == "ft") {
        cout << length << " " << unit << " is " << length*12.0 << " inches\n";
    }
    else {
        cout << "conversion unit\"" << unit << "\" not recognized, " <<
            "operation failed\n";	
    }
}

int main() {
    double first;
    double second;
    double smaller;
    double smallest = DBL_MAX;
    double larger;
    double largest = DBL_MIN;
    double sum;
    string first_unit;
    string second_unit;
    string new_smallest;
    string new_largest;
    
    while(cin >> first_unit >> second_unit) {
        new_smallest = "";
        new_largest = "";
        string tmp1_number;
        string tmp2_number;
        string tmp1_unit;
        string tmp2_unit;
        
        for (char c : first_unit) {
            if (isdigit(c)) {
                tmp1_number += c;
            }
            else if (isspace(c)) {
                cout << "TESTING";
                continue;
            }
            else {
                tmp1_unit += c;
            }
        }
        stringstream(tmp1_number) >> first;
        first_unit = tmp1_unit;
        convert(first, first_unit);
        
        for (char c : second_unit) {
            if (isdigit(c)) {
                tmp2_number += c;
            }
            else if (isspace(c)) {
                continue;
            }
            else {
                tmp2_unit += c;
            }
        }
        stringstream(tmp2_number) >> second;
        second_unit = tmp2_unit;
        convert(second, second_unit);
        
        if (first < second) {
            smaller = first;
            larger = second;
        }
        else if(first == second) {
            cout << "The numbers are equal\n";
            continue;
        }
        else {
            smaller = second;
            larger = first;
        }
        if (larger - smaller <= 1.0/100 ) {
            cout << "The numbers are almost equal\n";
        }
        if (smaller < smallest) {
            smallest = smaller;
            new_smallest = "This is the smallest number so far\n";
        }
        if (larger > largest) {
            largest = larger;
            new_largest = "This is the largest number so far\n";
        }
        cout << "The smaller value is " << smaller << "\n" << new_smallest;
        cout << "The larger value is " << larger << "\n" << new_largest;
        
        sum += first;
        sum += second;
        
        cout << "The sum of all numbers so far is " << sum << "\n";
        convert(sum, "m");
    }
}

