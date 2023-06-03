#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        char str[n];
        cin>>str;
        int i=0,j=n-1;
        while(i<j){
            if(str[i]!=str[j]){
                i++;
                j--;
            }
            else break;
        }
        if(i==j){
            cout<<1<<endl;
        }
        else if(i>j)cout<<0<<endl;
        else cout<<j-i+1<<endl;
    }
    return 0;
}