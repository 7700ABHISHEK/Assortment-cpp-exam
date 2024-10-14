#include <iostream>
using namespace std;
int main(){
    int size;

    cout << "Enter size : ";
    cin >> size;

    int arr[size];

    for(int i=0; i<size; i++){
        cout << "Enter the values : ";
        cin >> arr[i];
    }

    for(int i=0; i<size; i++){
        if(arr[i]<0){
            cout << arr[i];
        }
        cout << endl; 
    }

    return 0;
}