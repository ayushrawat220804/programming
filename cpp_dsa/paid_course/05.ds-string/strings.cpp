#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    
    system("cls");
    string a = "abc";
    string b;
    b = "esfg";
    cout << "string a : " << a << endl;
    cout << "string b : " << b << endl;

    // string dynamically 
    string *stringpointer = new string;
    *stringpointer = "this is pointer";
    cout << "pointer string address : " << stringpointer << endl;
    cout << "pointer string data : " << *stringpointer << endl;

    // to store 2d string , instead of using 2d char array we can you vector string, we basically every cell will be like string
    vector<string> v;
    v.push_back(a); // here we assigne previous data of a using push_back
    v.push_back(b); // similarly previous data of b
    v.push_back("hello"); // here we gave data to string v

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }

    cout << "\nafter sorting vector v : " << endl;
    for(int i = 0; i < v.size(); i++){
        sort(v[i].begin(),v[i].end());
        cout << v[i] << endl;
    }
    cout << "taking string as input . . . " << endl;
    string s1;
    getline(cin,s1); // it can take any size of string thats the benift of string class, don't have to worry about lenght
    cout << s1 << endl;


    string s2;
    s2 = "abcdef";
    cout << s2 << endl; 

    s2[2] = 'Z'; // change s2[index 2] to z , we can treat string as array 
    cout << s2 << endl;

    // adding strings
    string s5;
    s5 = a + b + "hello coding";
    cout << s5 << endl;

    string s6 = "";
    s6 = a + b + " hello Coding world";
    cout << a << endl;
    cout << b << endl;
    cout << "combined string a , b , hello coding world ---> " << s6 << endl;
    cout << "size of string s6 : " << endl; 
    cout << s6.size() << endl;
    cout << s6.length() << endl; // both size and length are same so they will give same output , we can use anyone of them



}