#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;

int simple_error(string text){
    cout << text;
    return 0;
}

int main(){
    cout << "Enter the name of the person you want to write to: ";
    string first_name;
    string last_name;
    cin >> first_name;
    cin >> last_name;
    cout << "Dear " << first_name << " " << last_name << "\n";
    cout << "How are you?\n";
    
    string friend_name;
    cout << "Enter name of friend: ";
    cin >> friend_name;
    cout << "Have you seen " << friend_name << " lately?\n";
    
    char friend_gender;
    cout << "Enter gender of friend: ";
    cin >> friend_gender;
    if(friend_gender == 'm') {
        cout << "If you see him, tell him to call me\n";
    } else {
        cout << "If you see her, tell her to call me\n";
    }
    
    int age;
    
    cout << "Enter your age: ";
    cin >> age;
        
    if(age > 110 || age < 0) {
        simple_error("You're kidding!\n");
    } else {
        cout << "I heard you just had a birthday and that you are " << age <<
        " years old\n";
    }
    
    return 0;
}
