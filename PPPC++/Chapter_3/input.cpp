#include <string>
#include <iostream>

using std::cout;
using std::cin;
using std::string;

inline void keep_window_open() {char ch; cin >> ch;};

int main() {
	cout << "Please enter you first name\n";
	string first_name;
	cin >> first_name;
	cout << "Hello, " << first_name << "!\n";
}
