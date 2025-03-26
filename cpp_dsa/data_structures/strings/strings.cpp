#include <iostream>
using namespace std;
class strings{
    public:
    string st1;
    void inputstring(){
        cout << "enter you class string : ";
        getline(cin, st1);
    }
    void showdata(){
        cout << "your entered string : ";
        cout << st1;
    }

};


int main(){
    // predefined string
    string s1 = "how are you!!";
    cout << s1 << endl;
    
    // input string
    string s2;
    cout << "enter data for string!!" << endl;
    getline(cin, s2);
    cout << "you entered : " << s2 << endl;

    // class string calling 
    strings strobj;
    strobj.inputstring();
    strobj.showdata();

    return 0;
}