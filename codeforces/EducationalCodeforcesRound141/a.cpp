/*
A. Make it Beautiful
time limit per test3 seconds
memory limit per test512 megabytes
inputstandard input
outputstandard output
An array a is called ugly if it contains at least one element which is equal to the sum of all elements before it. If the array is not ugly, it is beautiful.

For example:

the array [6,3,9,6] is ugly: the element 9 is equal to 6+3;
the array [5,5,7] is ugly: the element 5 (the second one) is equal to 5;
the array [8,4,10,14] is beautiful: 8≠0, 4≠8, 10≠8+4, 14≠8+4+10, so there is no element which is equal to the sum of all elements before it.
You are given an array a such that 1≤a1≤a2≤⋯≤an≤100. You have to reorder the elements of a in such a way that the resulting array is beautiful. Note that you are not allowed to insert new elements or erase existing ones, you can only change the order of elements of a. You are allowed to keep the array a unchanged, if it is beautiful.

Input
The first line contains one integer t (1≤t≤2000) — the number of test cases.

Each test case consists of two lines. The first line contains one integer n (2≤n≤50). The second line contains n integers a1,a2,…,an (1≤a1≤a2≤⋯≤an≤100).

Output
For each test case, print the answer as follows:

if it is impossible to reorder the elements of a in such a way that it becomes beautiful, print NO;
otherwise, in the first line, print YES. In the second line, print n integers — any beautiful array which can be obtained from a by reordering its elements. If there are multiple such arrays, print any of them.
Example
inputCopy
4
4
3 3 6 6
2
10 10
5
1 2 3 4 5
3
1 4 4
outputCopy
YES
3 6 3 6
NO
YES
2 4 1 5 3
YES
1 4 4

*/

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