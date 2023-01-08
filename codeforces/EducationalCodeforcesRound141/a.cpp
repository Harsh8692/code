#include <bits/stdc++.h>
using namespace std;

void swap(int* a,int *b){
    int temp =*(a);
    *(a)=*(b);
    *(b)=temp;
}
void merge(int* a,int st,int end,int mid,int *b){
    int size = end-st+1;
    int i = st; int j = mid+1;
    int k =st;
    while(i<=mid&&j<=end){
        if(a[i]<=a[j]){
            b[k]=a[i];
            // cout<<b[k]<<" ";
            i++;k++;
        }
        else{
            b[k]=a[j]; 
            // cout<<b[k]<<" ";
            j++;k++;
        }
    }
    if(j>end){
        while(i<=mid){
            b[k]=a[i];
            // cout<<b[k]<<" ";
            i++;k++;
        }
    }
    else if(i>mid){
        while(j<=end){
            b[k]=a[j];
            // cout<<b[k]<<" ";
            j++;k++;
        }
    }
    for(int l=st;l<=end;l++){
        a[l]=b[l];
    }
}
void mergeSort(int* a,int st,int end,int* b){
    if(st>=end)return;
    int mid = (st+end)/2;
    mergeSort(a,st,mid,b);
    mergeSort(a,mid+1,end,b);
    merge(a,st,end,mid,b);
    // cout<<endl;
}
void print(int *a, int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<", ";
    }
    cout<<endl;
}

int main(){
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++){
            cin>>a[j];
            a[j]*=-1;
        }
        int flag =0;
        int diffidx=0;
        for(int j=0;j<n-1;j++){
            if(a[j]==a[j+1]){
                flag++;
            }
            else{
                if(a[j]<a[j+1]){
                    if(a[diffidx]>a[j])diffidx=j;
                }
                else {
                    if(a[diffidx]>a[j+1])diffidx=j+1;
                }
            }
        }
        if(flag==n-1)cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            if(a[0]==a[1]){
                int reqidxSwap;
                int checkidx=0;
                for(int j=2;j<n;j++){
                    if(a[j]<a[checkidx]){
                        reqidxSwap=j;
                    }
                    checkidx=reqidxSwap;
                }
                swap(&a[0],&a[reqidxSwap]);
            }
            else{
                swap(&a[0],&a[diffidx]);
            }
            for(int k=0;k<n;k++){
                a[k]*=-1;
                cout<<a[k]<<" ";
            }
            cout<<endl;
        }

    }
    return 0;
}