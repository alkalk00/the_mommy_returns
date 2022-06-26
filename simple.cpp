#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    string str;
    cin>>str;

    stack<int> st;
    queue<int> q;

    for(int i=0;i<str.length();i++){
        for(int j=i;j<3;i++){
            cout<<str[j]<<" ";
        }
    }


    return 0;
}