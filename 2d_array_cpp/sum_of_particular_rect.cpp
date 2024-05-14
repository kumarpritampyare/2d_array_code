#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the row : ";
    cin >> n;
    int m;
    cout <<"enter the size of the colummn :";
    cin >> m;
    cout <<"enter your element"<<endl;
    int  arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }
    int l1,r1;
    cout << "enter the first coordinates"<<endl;
    cin >> l1 >> r1;
    int l2,r2;
    cout <<"enter the second coordinates"<<endl;
    cin>> l2 >> r2;
    int sum =0;
    cout <<"your sum is "<<endl;
    for(int i=min(l1,r1); i<=max(l1,l2); i++){
        for(int j=min(r1,r2); j<=max(r1,r2); j++){
            sum += arr[i][j];
        }
    }
    cout<<sum;

}