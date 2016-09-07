#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::cout;
using std::cin;
using std::sort;

int main() {
    vector<double> temps;
    for (double temp; cin>> temp;) {
        temps.push_back(temp);
    }
    
    double sum = 0;
    for (double x : temps) sum += x;
    cout << "Average temperature: " << sum/temps.size() << "\n";
    
    sort(temps.begin(), temps.end());
    double median;
    
    if (temps.size() % 2 == 0) {
        median = temps[temps.size()/2 - 1] + 0.5;
    }
    else {
        median = temps[temps.size()/2];
    }
    cout << "Median temperature: " << median << "\n";
}
