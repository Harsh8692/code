#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a;
        set<int> s;
        int evenCount = 0;
        int oddCount = 0;
        for(int i=0;i<n;i++){
            int b;
            cin>>b;
            s.insert(b);
            a.push_back(b);
            if(b%2==0){
                evenCount++;
            }
            else{
                oddCount++;
            }
        }
        if(oddCount!=0&&evenCount!=0){
            cout<<oddCount<<" "<<evenCount<<endl;
            for(int i=0;i<n;i++){
                if(a[i]%2!=0){
                    cout<<a[i]<<" ";
                }
            }
            cout<<endl;
            for(int i=0;i<n;i++){
                if(a[i]%2==0){
                    cout<<a[i]<<" ";
                }
            }
            cout<<endl;
        }
        if(oddCount==0||evenCount==0){
            if(s.size()>1){
                // if(oddCount==0&&evenCount==0){
                //     cout<<0<<" "<<0<<endl;
                // }
                // if(oddCount!=0){
                //     cout<<1<<" "<<oddCount-1<<endl;
                // }
                // if(evenCount!=0){
                //     cout<<1<<" "<<evenCount-1<<endl;
                // }
                sort(a.begin(),a.end());
                int count = 0;
                for(int i=0;i<n;i++){
                    if(a[i]==a[0]){
                        count++;
                    }
                }
                if(oddCount==0&&evenCount==0){
                    cout<<0<<" "<<0<<endl;
                }
                if(oddCount!=0){
                    cout<<count<<" "<<oddCount-count<<endl;
                }
                if(evenCount!=0){
                    cout<<count<<" "<<evenCount-count<<endl;
                }
                // cout<<endl;
                while(count--){
                    cout<<a[0]<<" ";
                }
                cout<<endl;
                for(int i=0;i<n;i++){
                    if(a[i]!=a[0]){
                        cout<<a[i]<<" ";
                    }
                }
                cout<<endl;
                // cout<<a[0]<<endl;
                // for(int i=1;i<n;i++){
                //     cout<<a[i]<<" ";
                // }
                // cout<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }

    }
    return 0;
}