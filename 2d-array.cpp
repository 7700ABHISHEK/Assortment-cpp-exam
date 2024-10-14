#include <iostream>
using namespace std;
int main(){
    int row,col;

    cout << "Enter the number of row : ";
    cin >> row;

    cout << "Enter the number of col : ";
    cin >> col;

    int arr[row][col];

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << "Enter the values : ";
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << arr[j][i] << " ";
        }

        cout << endl;
    }

    return 0;
}

// 1 2 3
// 4 5 6
// 7 8 9

// 1 4 7
// 2 5 8 
// 3 6 9