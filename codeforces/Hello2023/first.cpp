/*This program is not working properly currently*/

#include <iostream>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        char lamps[n];
        cin>>lamps;
        int r1idx=0, l1idx=0;
        int flag1 =0,flag2=0;
        for(int j=0;j<n;j++){
            if(lamps[j]=='L'){
                l1idx=j;
            }
            if(lamps[j]=='R'){
                r1idx=j;
            }
            if(l1idx>r1idx){
                cout<<"0"<<endl;
                flag1++;
                break;
            }
            if(((l1idx-r1idx)==1)){
                flag2++;
            }
        }
        if (flag1==0&&flag2!=0)cout<<r1idx<<endl;
        else cout<<"-1"<<endl;
    }
    return 0;
}