#include <iostream>

using std::cout;

int main() {
    char c = 'a';
    
    for (int i=0; i < 26; ++i) {
        c = c + i;
        cout << c << " " << int(c) << "\n";
        c = 'a';
    }
    c = 'A';
    
    for (int i=0;i<26;++i) {
        c = c + i;
        cout << c << " " << int(c) << "\n";
        c = 'A';
    }
}
