#include <iostream>
using namespace std;
int main(){
    char name[100];
    cout << "enter your name: \t ";
    cin >> name;
    name[4] = 'r'; // example ayush, it will give ayusr
    cout << "\nafter updated name: ";
    cout << name;
    return 0;
}
