#include <iostream>
using namespace std;
// for array1
void printarray(int arr[][5], int m , int n){
    for(int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int arr[][5] = {{1,3},{5,6}};
    printarray(arr,2,5);

    cout << "\n\n";

    int barr[5][5] = {{0}};
    // int barr[][5] = {{0}}; , we will get garbage value also
    printarray(barr,5,5);


    return 0;
}

/*

in 2d arrays , giving rows are optional , but giving columns are mendatory, will discuss in next programme
eg :            row 1     row 2    row 3 
int arr[][3] = {{1,2,3}, {4,5,6}, {7,8,9}}



in arrays whether it's 1d or 2d , null spaces will be consider as 0
eg : int arr[4] = {1,2,};
output will be like : 1 2 0 0 

int arr[][3] = {{2,3}{34}};
output will be like :
2  3 0 
34 0 0 

NOTE : 

formula for storing 2d array in row major form
a[i][j] = i * columns + j, we can also use a[i][j] = i * rows + j, but you give value for row or not but for column it is needed

always remember the value of column is mendatory
*/