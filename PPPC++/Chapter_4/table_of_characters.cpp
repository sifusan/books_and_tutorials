#include <iostream>

using std::cout;

int main() {
    int i = 0;
    char c = 'a';
    
    while (i<26) {
        c = c + i;
        cout << c << " " << i + 97 << "\n";
        i++;
    }
}
