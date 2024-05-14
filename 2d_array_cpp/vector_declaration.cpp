#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int> v(5,2);
    // int arr[3][5];
    vector<vector<int>> v(3,vector<int> (3,4));
    // cout << v.size() <<endl ;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << v[i][j]<<"   ";
        }
        cout <<endl;
    }

}