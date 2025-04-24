#include <iostream>
#include <vector>
using namespace std;
vector<string> vectorstring; // here we defined a empty vector string

int main(){
    // we have .length or .size functions in strings to check size or length of the string, let see how to use them
    string s1 = "this is string 1";
    cout << s1.length() << endl; // tell length of the string
    cout << s1.size(); // also tell length of the string
    cout << "\nn = " << n << endl;
    // now calling and pushing data in empty vectorstring
    vectorstring.push_back("apple");
    cout << vectorstring[0] << endl;
    vectorstring.push_back("banana");
    cout << vectorstring[1] << endl;
    vectorstring.push_back("mango");
    cout << vectorstring[2] << endl << endl;

    // printing vectorstrings using loop

    for (int i = 0; i < n.length(); i ++){
        cout << vectorstring[i] << " ";
    }

    return 0;
}