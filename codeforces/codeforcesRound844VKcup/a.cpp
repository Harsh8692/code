#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,w,d,h,a,b,f,g;
    cin>>t;
    while(t--){
        cin>>w>>d>>h;
        cin>>a>>b>>f>>g;
        int arr[4];
        if(b>g){
            arr[0]=a+f+b-g+h;
        }
        else{
            arr[0]=a+f+g-b+h;
        }
        if(b>g){
            arr[1]=2*w-a-f+b-g+h;
        }
        else{
            arr[1]=2*w-a-f+g-b+h;
        }
        if(a>f){
            arr[2]=b+g+a-f+h;
        }
        else{
            arr[2]=b+g+f-a+h;
        }
        if(a>f){
            arr[3]=2*d-g-b+a-f+h;
        }
        else{
            arr[3]=2*d-g-b+f-a+h;
        }
        int minidx=0;
        for(int i=0;i<4;i++){
            if(arr[i]<arr[minidx])minidx=i;
        }
        cout<<arr[minidx]<<endl;
    }
    return 0;
}