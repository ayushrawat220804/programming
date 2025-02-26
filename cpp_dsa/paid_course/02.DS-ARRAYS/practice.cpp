//just practicing
#include <iostream>
using namespace std;

int main(){
    int sizeofarray;
    cout << "enter size of array : ";
    cin >> sizeofarray;

    int* arr = new int[sizeofarray]; // dynamic creation for array 
    cout << "enter size of array : ";

    cout << "enter array elements \n";
    for (int i = 0; i < sizeofarray; i++){
        cin >> arr[i];
    }
    system("cls"); // clear screen
    
    cout << "displaying array elements : " << endl;
    for (int j = 0; j < sizeofarray; j++){
        cout << arr[j] << " ";
    }


}