// A. Gaming Forces

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int h[n];
        int sum =0;
        for(int i=0;i<n;i++){
            cin>>h[i];
            sum+=h[i];
        }
        if(((float)sum/n)<=2){
            if(sum%2==0)cout<<sum/2<<endl;
            else cout<<sum/2+1<<endl;
            // cout<<sum/2<<endl;
        }
        else{
            cout<<n<<endl;
        }
    }
    return 0;
}