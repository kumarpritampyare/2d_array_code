#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"enter the size of row : ";
    cin >> n;
    int m;
    cout <<"enter the size of column : ";
    cin >> m;
    cout << "enter the element of the matrix"<<endl;
    int mat[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> mat[i][j];
        }
    }
    cout <<"your transpose matrix is "<<endl;
    for(int j=0; j<m; j++){
        for(int i=0; i<n; i++){
            cout<< mat[i][j]<<" ";
        }
        cout <<endl;
    }
}