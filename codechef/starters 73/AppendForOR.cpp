/*
Problem
Chef has an array AA of length NN.

Chef wants to append a non-negative integer XX to the array AA such that the bitwise OR of the entire array becomes = Y=Y i.e. (A_1 \ | \ A_2 \ | \ \ldots \ | \ A_N \ | \ X) = Y(A 
1
​
  ∣ A 
2
​
  ∣ … ∣ A 
N
​
  ∣ X)=Y. (Here, |∣ denotes the bitwise OR operation)

Determine the minimum possible value of XX. If no possible value of XX exists, output -1−1.

Input Format
The first line contains a single integer TT — the number of test cases. Then the test cases follow.
The first line of each test case contains two integers NN and YY — the size of the array AA and final bitwise OR of the array AA.
The second line of each test case contains NN space-separated integers A_1, A_2, \dots, A_NA 
1
​
 ,A 
2
​
 ,…,A 
N
​
  denoting the array AA.
Output Format
For each test case, output the minimum possible value of XX for which (A_1 \ | \ A_2 \ | \ \ldots \ | \ A_N \ | \ X) = Y(A 
1
​
  ∣ A 
2
​
  ∣ … ∣ A 
N
​
  ∣ X)=Y holds.

If no such value exists, output -1−1.

Constraints
1 \leq T \leq 10^51≤T≤10 
5
 
1 \leq N \leq 10^51≤N≤10 
5
 
0 \le A_i \lt 2^{20}0≤A 
i
​
 <2 
20
 
0 \le Y \lt 2^{20}0≤Y<2 
20
 
Sum of NN over all test cases does not exceed 2 \cdot 10^52⋅10 
5
 
Sample 1:
Input
Output
4
4 15
3 5 6 2
3 8
1 2 1
1 1
0
5 7
1 2 4 2 1
8
-1
1
0
Explanation:
Test Case 1: (3 \ | \ 5 \ | \ 6 \ | \ 2 \ | \ X) = 15(3 ∣ 5 ∣ 6 ∣ 2 ∣ X)=15 holds for the following values of XX: \{8, 9, 10, 11, 12, 13, 14, 15\}{8,9,10,11,12,13,14,15}. The minimum among them is 88.

Test Case 2: It can be proven that no valid value of XX exists.

Test Case 3: (0 \ | \ X) = 1(0 ∣ X)=1 holds for only X = 1X=1.
*/

/*********88888888**********/



#include <bits/stdc++.h>
using namespace std;

int binary(int n){
    if(n==1||n==0)return n;
    return n%2+binary(n/2)*10;
}
int decimalValue(int n){
    return n%10 + decimalValue(n/10)*2;
}
int length(int n){
    int l=0;
    while(n!=0){
        n/=10;
        l++;
    }
    return l;
}
int main() {
	int t,n,y;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>n>>y;
	    int a[n];
	    for(int j=0;j<n;j++){
	        cin>>a[j];
	       // a[j]=binary(a[j]);
	    }
	    int sum=a[0];
	    for(int j=1;j<n;j++){
	        sum = sum | a[j];
	    }
	    int ans = -1;
	    for(int k=0;k<=y;k++){
	        if((sum | k) == y){
	            ans = k;
	            break;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
