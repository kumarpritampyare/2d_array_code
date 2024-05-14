#include<iostream>
#include<vector>
using namespace std;
void change(vector<vector<int>>&v, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if( i==0 || i==j)
                v[i][j] =1;
            else
                v[i][j] = v[i-1][j] + v[i-1][j-1];
        }
    }
}
int main(){
    int n;
    cin >> n;
    vector<vector<int>> v(n);
    int a;
    cin  >>a;
    v.push_back(a);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> v[i][j];
        }
    }
    change(v,n);
    cout << v[i][j]<<" ";
    // cout << change(v,n)<<endl;

}