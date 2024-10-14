#include <iostream>

using namespace std;

int main()
{
    int row, col, rownum, colnum, sum=0;

    cout << "Enter the number of row : ";
    cin >> row;

    cout << "Enter the number of col : ";
    cin >> col;

    int arr[row][col];

    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cout << "Enter The Values : ";
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Enter Row Number Which You Wanted To add :";
    cin >> rownum;
    cout << "Enter Col Number Which You Wanted To add :";
    cin >> colnum;

    for(int k=0; k<row; k++){
        sum = sum + arr[rownum][k];
    }
    
    cout << "Row sum is : " << sum << " ";

    sum=0;

    for(int k=0; k<col; k++){
        sum = sum + arr[k][colnum];
    }

    cout << "\nCol sum is : " << sum << " ";

    return 0;
}