#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;

int main() {
	cout << "Please enter your first name and age\n";
	string first_name;
	string last_name;
	double age = 0.0;
	cin >> first_name;
	cin >> last_name;
	cin >> age;
	cout << "Hello, " << first_name << " " << last_name << "(age " << age * 12
			 << ")\n";
	return 0;
}
