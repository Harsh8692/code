#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        char c;
        cin>>c;
        char a[]="codeforces";
        int flag=0;
        for(int i=0;i<11;i++){
            if(c==a[i]){
                cout<<"YES"<<endl;
                flag++;
                break;
            }
        }
        if(flag==0){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}