/*
Problem
Chef is given a number in form of its binary representation 
�
S, having length 
�
N.

Determine if the number can be represented as a sum of exactly three non-negative powers of 
2
2. Please refer to samples for further explanation.

Note that 
�
S will NOT contain leading zeros.

Input Format
The first line of input will contain a single integer 
�
T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains a single integer 
�
N, the length of the binary string.
The next line contains the string 
�
S, the binary representation of a number.
Output Format
For each test case, output YES if the number can be represented as sum of exactly three powers of 
2
2.

You can print each character in uppercase or lowercase. For example YES, yes, Yes, and yES are all considered the same.

Constraints
1
≤
�
≤
1000
1≤T≤1000
1
≤
�
≤
2
⋅
1
0
5
1≤N≤2⋅10 
5
 
�
S consists of 
0
0 and 
1
1 only, and has no leading zeros.
The sum of 
�
N over all test cases won't exceed 
2
⋅
1
0
5
2⋅10 
5
 .
Sample 1:
Input
Output
4
1
1
4
1001
5
11001
7
1101101
NO
YES
YES
NO
Explanation:
Test case 
1
1: It is not possible to represent the given number as a sum of exactly three powers of 
2
2.

Test case 
2
2: The given string 
1001
1001 corresponds to the number 
9
9. We can represent 
9
9 as a sum of exactly three powers of 
2
2 as 
9
=
2
2
+
2
2
+
2
0
9=2 
2
 +2 
2
 +2 
0
 .

Test case 
3
3: The given string 
11001
11001 corresponds to the number 
25
25. We can represent 
25
25 as a sum of exactly three powers of 
2
2 as 
25
=
2
4
+
2
3
+
2
0
25=2 
4
 +2 
3
 +2 
0
 .

Test case 
4
4: It is not possible to represent the given number as a sum of exactly three powers of 
2
2.
*/

/*********8888888888*******/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    char S[n+1];
	    cin>>S;
	    int count=0;
	    int highest1Idx=0;
	    for(int i=0;i<n;i++){
	        if(S[i]=='1'){
	            if(n-1-i>highest1Idx)highest1Idx=n-i-1;
	            count++;
	        }	           
	    }
	    if(count==3)cout<<"YES"<<endl;
	    else if(count==2){
	        if(highest1Idx>=1)cout<<"YES"<<endl;
	        else cout<<"NO"<<endl;
	    }
	    else if(count==1){
	        if(highest1Idx>=2){
	            cout<<"YES"<<endl;
	        }
	        else cout<<"NO"<<endl;
	    }
	    else cout<<"NO"<<endl;
	}
	return 0;
}
