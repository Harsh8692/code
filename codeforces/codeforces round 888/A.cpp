#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m,k,H;
        cin >>n>>m>>k>>H;
        int h[n];
        int ans = 0;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            h[i] = x;
            // if(x==H)continue;
            if(abs(x-H)%k==0){
                if((abs(x-H)/k)<=m-1 && (abs(x-H)/k>0)){
                    // cout<<"Value of x is:"<<x<<endl;
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}