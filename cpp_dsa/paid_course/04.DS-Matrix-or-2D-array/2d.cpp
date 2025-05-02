#include <iostream>
using namespace std;
int main(){
    int arr[10][10];
    int m, n;
    cout << "how many rows ? maximum 10 . . . " << endl;
    cin >> m;
    cout << "how many columns ? maxium 10 . . . " << endl;
    cin >> n;
    cout << "enter arrays : " << endl;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    cout << "entered arrays elements : row wise " << endl;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << " \n\n";
    }

    cout << "entered arrays elements : column wise " << endl;
    for (int j = 0; j < n;j++){
        for (int i = 0; i < m; i++){
            cout << arr[i][j] << " ";
        }
        cout << " \n";
    }

    return 0;
}

/*

2d arrays are also stored in 1d arrays in system , we have 2 ways to store them 
1. row wise
2. column wise

in majority world , most popular is row wise, we can use column wise also but row wise is more popular

row wise example :
input is 2 rows 3 columns 
input are 1,2,3,4,5,6

in system it will store in row wise like this 
row 1
1 2 3

row 2 
4 5 6 


in system, column wise will look like this :
column 1
1 4

column 2 
2 5 

column 3 
3 6

in system it will store in 1d array like this 
1 4  2 5  3 6 

code will be same for column wise but will change to column the row, and row to column 
// cout 
for (int j = 0; j < n; i++){
        for (int i = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

*/

