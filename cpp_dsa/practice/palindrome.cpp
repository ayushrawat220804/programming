#include <iostream>
#include <string>
using namespace std;

int getnum(){
    int num;

    cout << "check whether a number is palindrom or not!!" << endl;
    cin >> num;
    cout << "your typed numbers : " << num << endl;
    return num;
}

int main(){
    int originalnumber = getnum();
    int getlastdigit = 0;
    int num = originalnumber;
    int reversednum = 0; 
    while (num > 0){
        getlastdigit = num % 10; // extracting last digit
        reversednum = reversednum * 10 +  getlastdigit; // building string from lastdigit
        // delete deleting last digit 
        num = num / 10;

    }
    if (originalnumber ==  reversednum){
        cout << "yes both integer strings are equal!!" << endl;
    } else {
        cout << "no strings are different!!" << endl;
    }
    return 0;
}