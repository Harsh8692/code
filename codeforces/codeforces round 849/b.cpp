#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        string str;
        cin>>str;
        // int countL = count(str.begin(),str.end(),'L');
        // int countR = count(str.begin(),str.end(),'R');
        // int countD = count(str.begin(),str.end(),'D');
        // int countU = count(str.begin(),str.end(),'U');
        int x=0,y=0;int flag=0;
        for(int i=0;i<str.size();i++){
            if(str[i]=='L') x=x-1;
            else if(str[i]=='R')x+=1;
            else if(str[i]=='D')y=y-1;
            else if(str[i]=='U')y+=1;
            if(x==1 && y==1){
                flag++;
                cout<<"YES"<<endl;
                break;
            }
        }
        if(flag==0){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}