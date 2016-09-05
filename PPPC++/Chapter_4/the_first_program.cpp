#include <iostream>

using std::cout;

int square(int number) {
    int result = 0;
    for (int i=0; i < number; i++) {
        result+=number;
    }
    
    return result;
}

int main() {
   int s1 = square(2);
   int s2 = square(10);
   int s3 = square(4);
   
   cout << s1 << " " << s2 << " " << s3; 
}
