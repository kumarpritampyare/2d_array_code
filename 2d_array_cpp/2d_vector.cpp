#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(4);
    v1.push_back(4);
    // cout << v1[1];

    vector<int> v2;
    v2.push_back(5);
    v2.push_back(7);
    v2.push_back(6);
    v2.push_back(6);
    v2.push_back(6);
    v2.push_back(6);
    // cout << v2[2];

    vector<int> v3;
    v3.push_back(9);
    v3.push_back(10);
    v3.push_back(11);
    v3.push_back(12);
    v3.push_back(13);
    v3.push_back(14);
    // cout << v3[5];

    vector< vector<int>> v;
    for(int i=0; i<v.size(); i++){
            v.push_back(v1);
            v.push_back(v2);
            v.push_back(v3);
        for(int j=0; j<v.size(); j++){
            cout << v[i][j] <<" ";
        }
        cout <<endl;
    }

}