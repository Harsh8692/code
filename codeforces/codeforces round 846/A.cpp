#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        vector <int>odd;
        vector <int>even;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0){
                even.push_back(i+1);
            }
            else{
                odd.push_back(i+1);
            }
        }
        int size_even=even.size();
        int size_odd=odd.size();
        if(size_odd==0){
            cout<<"NO"<<endl;
        }
        else{
            if(size_even>=2){
                cout<<"YES"<<endl;
                cout<<odd[0]<<" ";
                cout<<even[0]<<" ";
                cout<<even[1]<<" ";
            }
            else if(size_even<2&&size_odd>=3){
                cout<<"YES"<<endl;
                cout<<odd[0]<<" ";
                cout<<odd[1]<<" ";
                cout<<odd[2]<<" ";
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}