#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;

int main() {
	string previous = "";
	string current;
	while(cin>>current) {
		if(previous == current)
			cout << "repeated word: " << current << "\n";
		previous = current;
	}
	return 0;
}
