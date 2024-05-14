#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cout << "enter the size of the row/colummn : ";
    cin >> m;
    int mat[m][m];
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cin >> mat[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=i+1; j<m; j++){
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }
    cout<< " your transpose matrix is " <<endl;
     for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cout << mat[i][j]<<" ";
        }
        cout <<endl;
    }
    
}