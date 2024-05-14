#include<iostream>
using namespace  std;
int main(){
    int n;
    cout << "enter the size of row : ";
    cin >>n;
    int m;
    cout <<"enter the size of column : ";
    cin >> m;
    cout << "enter the element of first matrix" <<endl;
    int mat1[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> mat1[i][j];
        }
    }
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //         cout << mat1[i][j] << " ";
    //     }
    //     cout <<endl;
    // }
    cout <<"enter the element of the second matrix"<<endl;
    int mat2[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> mat2[i][j];
        }
    }
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //         cout << mat2[i][j] << " ";
    //     }
    //     cout <<endl;
    // }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
           mat2[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    cout << "the resultent matrix is : " <<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << mat2[i][j] << " ";
        }
        cout <<endl;
    }



}