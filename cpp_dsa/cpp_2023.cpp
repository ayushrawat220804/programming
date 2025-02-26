#include <iostream>
using namespace std;
class rohit{
    public:
    char name[20];
    void yourname(){
        std::cout << "enter you name : " ;
        std::cin >> name;
    }
    void display(){
        std::cout << "your name is : " << name;
    }
};

int main(){
    rohit obj;
    obj.yourname();
    obj.display();

    return 0;
}