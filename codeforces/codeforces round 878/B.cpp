//This solution is not correct. I am yet to fix it.

#include<bits/stdc++.h>
using namespace std;
// bool ifsatisfy(int status[],vector<int>kVal,int maxidx,int& n){
//     int sum=0;
//     for(int i=0;i<maxidx;i++){
//         if(status[i]==1)sum+=kVal[i];
//     }
//     if(sum<=n)return true;
//     return false;
// }
// void newsol(int idx,int maxidx,int status[],int& ans,vector<int>kVal,int &n){
//     if(idx==maxidx){
//         if(ifsatisfy(status,kVal,maxidx,n))ans++;
//     }
//     status[idx]=1;
//     newsol(idx+1,maxidx,status,ans,kVal,n);
//     status[idx]=0;
//     newsol(idx+1,maxidx,status,ans,kVal,n);
// }
int solution(int& n, int& k){
    vector<int>kVal;
    for(int i=0;i<k;i++){
        kVal.push_back(pow(2,i));
    }
    int idxOfHighestCoinsToBeSpent=k-1;
    for(int i=k-1;i>=0;i--){
        if(kVal[i]<=n){
            idxOfHighestCoinsToBeSpent=i;
            break;
        }
    }
    int ans=0;
    for(int i=0;i<idxOfHighestCoinsToBeSpent;i++){
        ans+=kVal[i];
    }
    // int status[idxOfHighestCoinsToBeSpent+1]={0};
    // newsol(0,idxOfHighestCoinsToBeSpent,status,ans,kVal,n);
    return ans;
}
int main(){
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        cout<<solution(n,k)<<endl;
    }
    return 0;
}