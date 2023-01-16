#include<bits/stdc++.h>
using namespace std;
// int count=0;

// This question will require all the subsets of given array and then checking condition if the maxm of that
// set is strictly smaller than the number of elements in that set

int printSubsets(int ar[], int size, int includedOrNot[]){
    int emptySet = 1;  // Checks for an empty set throughout the loop 
    int check[size];
    int goingCount=0;
    for (int i = 0; i < size; i++)
    {
        if (includedOrNot[i]==1)
        {
            // printf("%d, ",ar[i]);
            check[i]=ar[i];
            goingCount++;
            emptySet = 0;
        }
        else{
            check[i]=-1;
        }
        
    }
    int maxidx=0;
    for(int i=0;i<size;i++){
        if(check[i]>check[maxidx])maxidx=i;
    }
    if(goingCount>check[maxidx]){
        return 1;
    }
    else return 0;
    // if (emptySet == 1)
    // {
    //     // printf("Empty"); // this is printed when none of the elements are included for printing.
    // }
    // // printf("\n");
    
}
int subsets(int ar[], int size,int arBegin, int includedOrNot[]){
    static int count=0;
    // static int time = 0;
    // time++;
    if (arBegin == size)  // Base case
    {
        count+=printSubsets(ar, size, includedOrNot); // this function prints elements of the set according to the values of the includedOrNot array at its different indices        
        return 0;
    }
    includedOrNot[arBegin]=1;    // 1 implies that ar[arBegin] has to included while printing
    static int a=0,b=0;
    subsets(ar,size,arBegin+1,includedOrNot);
    includedOrNot[arBegin]=0;   // 0 implies that ar[arBegin] is not to be included while printing
    subsets(ar, size, arBegin+1, includedOrNot);
    // if(time==pow(2,size)){
    //     return count;
    // }
    return count;
}

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        int includedOrNot[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<subsets(a,n,0,includedOrNot)<<endl;
    }
    return 0;
}