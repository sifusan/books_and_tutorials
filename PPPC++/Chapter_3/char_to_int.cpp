#include <iostream>

using std::cout;

int main() {
	char c = 'x';
	int i1 = c;
	int i2 = 'x';
	char c2 = i1;
	cout << ' ' << i1 << ' ' << c2 << '\n';
	
	return 0;
}
