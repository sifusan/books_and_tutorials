#include <iostream>
#include <vector>
#include <algorithm>
#include <float.h>

using std::cout;
using std::cin;
using std::vector;
using std::sort;

int main() {
    vector<double> distances;
    for (double distance; cin >> distance;) {
        distances.push_back(distance);
    }
    
    sort(distances.begin(), distances.end());
    
    double sum;
    double shortest = DBL_MAX;
    double longest = DBL_MIN;
    double mean;
        
    for (int i = 0; i < distances.size(); i++) {
        sum += distances[i];
        cout << distances[i] << "\n";
        if (i != 0 && (distances[i] - distances[i -1]) < shortest) {
            shortest = distances[i] - distances[i - 1];
        }
        if (i != 0 && (distances[i] - distances[i - 1]) > longest) {
            longest = distances[i] - distances[i -1];
        }
        if (i != 0) {
            mean += distances[i] - distances[i - 1];
        }
    }
    
    mean = mean / distances.size();
        
    cout << "Sum of all distances: " << sum << "\n";
    cout << "The shortest distance between two neighbouring cities is: " <<
        shortest << "\n";
    cout << "The longest distance between two neighbouring cities is: " <<
        longest << "\n";
    cout << "The mean distance between two cities is " << mean << "\n";
}
