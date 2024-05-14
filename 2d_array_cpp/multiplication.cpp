#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout << "enter the size of mat1 row : ";
    cin >> n;
    int m;
    cout << "enter the size of mat1 column : ";
    cin >> m;

    int p;
    cout << "enter the size of mat2 row : ";
    cin >> p;
    int q;
    cout << "enter the size of mat2 column : ";
    cin >> q;
     if(m == p){
        int  mat1[n][m];
        cout <<"enter the element of mat1"<<endl;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> mat1[i][j];
            }
        }
        cout <<"enter the element of mat2"<<endl;
        int mat2[p][q];
        for(int i=0; i<p; i++){
            for(int j=0; j<q; j++){
                cin >> mat2[i][j];
            }
        }
        int ans[m][q];
        for(int i=0; i<m; i++){
            for(int j=0;j<q; j++){
                ans[i][j] = 0;
                for(int k=0; k<m; k++){
                    ans[i][j] += mat1[i][k] * mat2[k][j]; 
                }
            }
        }
        cout <<"your resultant matrix is " <<endl;
        for(int i=0; i<m; i++){
            for(int j=0; j<q; j++){
                cout << ans[i][j]<<" ";
            }
            cout <<endl;
        }
    }
    else{
        cout<< "multiplication can't be exits this order"<<endl;
    }
}