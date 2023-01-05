// Currently this code is not working.

/*
Problem
Alice gave Bob 33 integers N, K,N,K, and SS. Help Bob find an SS-good sequence.

A sequence BB of length NN is called SS-good if the following conditions are met:

B_i \in \{-1, 0, 1\}B 
i
​
 ∈{−1,0,1} for each 1 \leq i \leq N1≤i≤N
\sum_{i=1}^N B_i\cdot K^{i-1} = S∑ 
i=1
N
​
 B 
i
​
 ⋅K 
i−1
 =S
If there are multiple SS-good sequences, print any of them.
If no SS-good sequence exists, print -2−2.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of a single line of input containing three space-separated integers — N, K,N,K, and SS.
Output Format
For each test case:

If no SS-good sequence exists, print -2−2.
Otherwise, output NN space-separated integers denoting the SS-good sequence.
If multiple SS-good sequences exist, you may print any of them.

Constraints
1 \leq T \leq 10^41≤T≤10 
4
 
1 \leq N \leq 1001≤N≤100
2 \leq K \leq 1002≤K≤100
1 \leq S \leq 10^{18}1≤S≤10 
18
 
Sample 1:
Input
Output
3
4 2 15
3 6 36
5 5 7
1 1 1 1
0 0 1
-2
Explanation:
Test case 11: We have B = [1,1,1,1]B=[1,1,1,1] and S = 15S=15
\sum_{i=1}^N B_i\cdot K^{i-1} = 1\cdot 1 + 2\cdot 1 + 4\cdot 1 + 8\cdot 1 = 15∑ 
i=1
N
​
 B 
i
​
 ⋅K 
i−1
 =1⋅1+2⋅1+4⋅1+8⋅1=15, hence BB is an SS-good sequence.

Test case 22: We have B = [0, 0, 1]B=[0,0,1] and S = 36S=36. 6^2 = 366 
2
 =36 so clearly BB is SS-good.

Test case 33: No SS-good sequence of length 55 exists.
*/

/******8888888888888***********888888**********/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,k,s;
	cin>>t;
	int flag=0;
	for(int i=0;i<t;i++){
	    cin>>n>>k>>s;
	   // int a[3]={1,0,-1};
	   // for(int j=0;j<3;j++){
	   // 
	   // }
	    int b[n];
	   // cout << i+1 << " ";
	    for(int j=0;j<n;j++){
	        int rem = s%k;
	        b[j]=rem;
	        s=(s-b[j])/k;
	        if(rem==0||rem==1||rem==k-1){
	            continue;
	        }
	        else{
	            cout<<-2<<endl;
	            flag++;
	            break;
	        }
	    }
	    if(flag==0){
	        for(int j=0;j<n;j++){
	            cout<<b[j]<<" ";
	        }
	        cout<<endl;
	    }
	}
	return 0;
}
