#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::string;
using std::vector;

int main() {
    vector <string> bad_words;
    bad_words.push_back("windows");
    bad_words.push_back("apple");
    
    string user_input = "a";
    
    while(1) {
        cin >> user_input;
        for (string s : bad_words) {
            if (user_input  == s) {
                user_input = "BLEEP\n";
                break;
            }
        }
        cout << user_input;
    }
}
