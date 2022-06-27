#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int arr[n];
        for(int i=0;i<n;i++){cin>>arr[i];}

        int a[n],b[n];
        a[0]=arr[0];

        for(int i=1;i<n;i++){
            a[i]=a[i-1]+arr[i];
        }

        
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
    }
    return 0;
}