#include <iostream>
using namespace std;

int main(){
    system("cls");

    long long s1;
    cout << "check whether a number is palindrome or not ." << endl;
    cout << "enter integer input : . . " << endl;
    cin >> s1;
    cout << "you entered : " << s1 << endl;
    long long originalinput= s1, reversedinput= 0;

    while (s1 > 0){
        long long lastdigit = s1 % 10;
        reversedinput = reversedinput * 10 + lastdigit;
        s1 = s1 / 10;
    }
    if (originalinput == reversedinput){
        cout << "yes given string is palindrome . . ." << endl;
    }
    else {
        cout << "no , given string is not a palindrome . . . " << endl;
    }
    // if(palindrome){
    //     cout << "yes given string is palindrome . . .";
    // } else {
    //     cout << "no given string is not a palindrome . . . "
    // }

    return 0;
}