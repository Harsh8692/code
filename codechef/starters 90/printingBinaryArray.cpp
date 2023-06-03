/*
Problem
Consider a binary array 
�
=
�
1
,
�
2
,
…
,
�
�
B=B 
1
​
 ,B 
2
​
 ,…,B 
M
​
  of length 
�
M. Being a binary array means that every 
�
�
B 
i
​
  is either 
0
0 or 
1
1.
�
�
�
�
�
(
�
)
Score(B) is defined as the number of indices 
�
i 
(
(where 
1
≤
�
<
�
)
1≤i<M) such that 
�
�
≠
�
�
+
1
B 
i
​
 =B 
i+1
​
 .

You are given a binary array 
�
=
�
1
,
�
2
,
…
,
�
�
A=A 
1
​
 ,A 
2
​
 ,…,A 
N
​
  of length 
�
N. Print a binary array 
�
C of length 
�
N such that

�
≠
�
A=C, and
�
�
�
�
�
(
�
)
=
�
�
�
�
�
(
�
)
Score(A)=Score(C).
That is, print a binary array 
�
C which is not identical to 
�
A, but has the same Score as that of 
�
A.

It can be proven that such a 
�
C always exists.

Input Format
The first line of input contains a single integer 
�
T, denoting the number of test cases.
Each test case consists of two lines of input:
The first line of each test case contains a single integer 
�
N — the length of the binary array 
�
A.
The second line of each test case contains 
�
N space-separated integers 
�
1
,
�
2
,
…
,
�
�
A 
1
​
 ,A 
2
​
 ,…,A 
N
​
  representing the binary array 
�
A.
Output Format
For each test case, print 
�
N space-separated integers 
�
1
,
�
2
,
…
,
�
�
C 
1
​
 ,C 
2
​
 ,…,C 
N
​
  satisfying all the given conditions.

If there are multiple solutions, you can print any of them.

Constraints
1
≤
�
≤
1
0
5
1≤T≤10 
5
 
1
≤
�
≤
1
0
5
1≤N≤10 
5
 
0
≤
�
�
≤
1
0≤A 
i
​
 ≤1
The sum of 
�
N over all test cases won't exceed 
1
0
5
10 
5
 .
Sample 1:
Input
Output
2
1
0
3
1 1 0
1
0 1 1
Explanation:
Testcase 1: The given array is 
�
=
[
0
]
A=[0]. 
�
�
�
�
�
(
�
)
=
0
Score(A)=0, since there are no indices such that 
�
�
≠
�
�
+
1
A 
i
​
 =A 
i+1
​
 . Therefore, we need to output another array of length 
1
1, whose Score is also 0. 
�
=
[
1
]
C=[1] is the only such array, and we output it.

Testcase 2: The given array is 
�
=
[
1
,
1
,
0
]
A=[1,1,0]. 
�
�
�
�
�
(
�
)
=
1
Score(A)=1, since 
�
2
≠
�
3
A 
2
​
 =A 
3
​
 . And it is the only such index. Therefore, we need to output another array of length 
3
3, whose Score is also 1. 
�
=
[
0
,
1
,
1
]
C=[0,1,1] is one such array, and we output it. Note that there are other such arrays as well.
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	        if(a[i]==0) cout<<1<<" ";
	        else cout<<0<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
