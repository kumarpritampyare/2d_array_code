#include<iostream>
#include<vector>
using namespace std;
void display(int &arr[2][4]){
    cout << arr[1][0];
}
int main(){
    int arr[3][5] = {{1,2,3,4},{1,1,3},{4,7,8,9,0}};
    cout << arr[2][3];
    display(arr);
    cout << arr[1][2];
}