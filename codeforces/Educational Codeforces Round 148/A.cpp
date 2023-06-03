#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])==mp.end()){
                mp.insert({s[i],1});
            }
            else{
                mp[s[i]]++;
            }
        }
        int count=0;
        for(auto it:mp){
            // cout<<it.first<<" "<<it.second<<endl;
            if((it.second)%2==0)count++;
        }
        if(count>=2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}