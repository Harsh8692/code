/*
Problem
Chef has two arrays AA and BB of the same size NN.

In one operation, Chef can:

Choose two integers ii and jj (1 \leq i, j \leq N)(1≤i,j≤N) and swap the elements A_iA 
i
​
  and B_jB 
j
​
 .
Chef came up with a task to find the minimum possible value of (A_{max} - A_{min}A 
max
​
 −A 
min
​
 ) after performing the swap operation any (possibly zero) number of times.

Since Chef is busy, can you help him solve this task?

Note that A_{max}A 
max
​
  and A_{min}A 
min
​
  denote the maximum and minimum elements of the array AA respectively.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains one integer NN — the number of elements in each array.
The second line consists of NN space-separated integers A_1, A_2,\ldots ,A_NA 
1
​
 ,A 
2
​
 ,…,A 
N
​
  denoting the elements of the array AA.
The third line consists of NN space-separated integers B_1, B_2, \ldots ,B_NB 
1
​
 ,B 
2
​
 ,…,B 
N
​
  denoting the elements of the array BB.
Output Format
For each test case, output on a new line, the minimum possible value of (A_{max} - A_{min}A 
max
​
 −A 
min
​
 ) in the array AA after doing swap operation any number of times.

Constraints
1 \leq T \leq 10^51≤T≤10 
5
 
1 \leq N \leq 2\cdot 10^51≤N≤2⋅10 
5
 
1 \leq A_i, B_i \leq 10^91≤A 
i
​
 ,B 
i
​
 ≤10 
9
 
The sum of NN over all test cases won't exceed 2\cdot 10^52⋅10 
5
 .
Sample 1:
Input
Output
3
3
2 1 3
1 4 1
4
2 1 4 3
3 2 6 2
5
2 8 4 9 7
7 3 6 8 4
0
1
2
Explanation:
Test case 11: Chef can make the following operations:

Operation 11: Choose i=1i=1 and j=1j=1 and swap A_1A 
1
​
  with B_1B 
1
​
 .
Operation 22: Choose i=3i=3 and j = 3j=3 and swap A_3A 
3
​
  with B_3B 
3
​
 .
By doing the above operations, array AA becomes [1, 1, 1][1,1,1]. Here (A_{max} - A_{min}) = 0(A 
max
​
 −A 
min
​
 )=0. It can be shown that this is the minimum value possible.

Test case 22: Chef can make the following operations:

Operation 11: Choose i=2i=2 and j=2j=2 and swap A_2A 
2
​
  with B_2B 
2
​
 .
Operation 22: Choose i=3i=3 and j=1j=1 and swap A_3A 
3
​
  with B_1B 
1
​
 .
Operation 33: Choose i=4i=4 and j=4j=4 and swap A_4A 
4
​
  with B_4B 
4
​
 .
By doing the above operations, array AA becomes [2, 2, 3, 2][2,2,3,2]. Here (A_{max} - A_{min}) = 1(A 
max
​
 −A 
min
​
 )=1. It can be shown that this is the minimum value possible.

Test case 33: Chef can make the following operations:

Operation 11: Choose i=1i=1 and j=1j=1 and swap A_1A 
1
​
  with B_1B 
1
​
 .
Operation 22: Choose i=3i=3 and j=4j=4 and swap A_3A 
3
​
  with B_4B 
4
​
 .
By doing the above operations, array AA becomes [7, 8, 8, 9, 7][7,8,8,9,7]. Here (A_{max} - A_{min}) = 2(A 
max
​
 −A 
min
​
 )=2. It can be shown that this is the minimum value possible.
*/

/***********8888888888*********/

// Time limit exceeded in this code 

#include <bits/stdc++.h>
using namespace std;

int maxidx(int*a,int n){
    int idx=0;
    for(int i=1;i<n;i++){
        if(a[i]>a[idx])idx=i;
    }
    return idx;
}
int minidx(int*a,int n){
    int idx=0;
    for(int i=1;i<n;i++){
        if(a[i]<a[idx])idx=i;
    }
    return idx;    
}
void swap(int* a,int *b){
    int temp =*(a);
    *(a)=*(b);
    *(b)=temp;
}
int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n],b[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>b[i];
	    }
	    int aminidx=minidx(a,n);
	    int bmaxidx=maxidx(b,n);
	    while(a[aminidx]<b[bmaxidx]){
	        swap(&a[aminidx],&b[bmaxidx]);
	        aminidx=minidx(a,n);
	        bmaxidx=maxidx(b,n);
	    }
	    int diff1=a[maxidx(a,n)]-a[aminidx];
	    int diff2=b[bmaxidx]-b[minidx(b,n)];
	    if(diff1<diff2){
	        cout<<diff1<<endl;
	    }
	    else cout<<diff2<<endl;
	}
	return 0;
}
