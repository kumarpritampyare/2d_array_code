#include<iostream>
#include<limits.h>
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
    int index = -1;
    int maximum = INT_MIN;
    for(int i=0; i<n; i++){
        int sum =0; 
        for(int j=0; j<m; j++){
            sum += arr[i][j];
        }
        index = i;
        if(maximum < sum){
            maximum = sum;
        }
   
    }
    cout <<"the index of the maximum sum is : "<< index+1;
    
}