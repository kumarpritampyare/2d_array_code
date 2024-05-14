#include<iostream>
using namespace std;
int main(){
    int n=5;
    int m=5;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            arr[i][j] = 10;
            cout << arr[i][j]<<" ";

        }
        cout <<endl;
    }
    
}