/*
Problem
Chef gives an array 
�
A with 
�
N elements to Babla. Babla's task is to find the maximum non-negative integer 
�
X such that:

No element in the array belongs to the range 
[
−
�
,
�
]
[−X,X]. In other words, for all 
(
1
≤
�
≤
�
)
(1≤i≤N), either 
�
�
<
−
�
A 
i
​
 <−X or 
�
�
>
�
A 
i
​
 >X.
Help Babla to find the maximum non-negative integer 
�
X for which the given condition is satisfied or determine if no such 
�
X exists.

Input Format
The first line of input will contain a single integer 
�
T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains an integer 
�
N — the number of elements in the array.
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
  representing the array 
�
A.
Output Format
For each test case, output on a new line, the maximum non-negative integer 
�
X, satisfying the above condition.
If no such 
�
X exists, output 
−
1
−1 instead.

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
 
−
1
0
9
≤
�
�
≤
1
0
9
−10 
9
 ≤A 
i
​
 ≤10 
9
 
Sum of 
�
N over all test cases does not exceed 
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
3
5
8 4 2 5 2
6
7 9 -10 8 12 17
4
0 -3 -1 -10
1
6
-1
Explanation:
Test case 
1
1: The maximum value of 
�
X such that no element of the array belongs to the range 
[
−
�
,
�
]
[−X,X] is 
1
1. All elements of the array are strictly greater than 
1
1.

Test case 
2
2: The maximum value of 
�
X such that no element of the array belongs to the range 
[
−
�
,
�
]
[−X,X] is 
6
6. All positive elements of the array are strictly greater than 
6
6 and negative elements are strictly less than 
−
6
−6.

Test case 
3
3: It is not possible to choose an element 
�
X that satisfies the given condition.
*/

/***********888888888********/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    vector<int> ab;
	    for(int i=0;i<n;i++){
	        int temp;
	        cin>>temp;
	        ab.push_back(abs(temp));
	    }
	    sort(ab.begin(),ab.end());
	    if(ab[0]==0){
	        cout<<-1<<endl;
	    }
	    else cout<<ab[0]-1<<endl;
	}
	return 0;
}
