/*
Problem
Chef had an array 
�
A of length 
�
N such that 
1
≤
�
�
≤
�
1≤A 
i
​
 ≤N for all 
1
≤
�
≤
�
1≤i≤N. Chef constructed another binary array 
�
B of length 
�
N in the following manner:

�
�
=
1
B 
i
​
 =1 if the frequency of element 
�
i in 
�
A is odd.
�
�
=
0
B 
i
​
 =0 if the frequency of element 
�
i in 
�
A is even.
Such an array 
�
B is called the parity encoding array of 
�
A.

For example, if 
�
=
[
1
,
1
,
2
,
3
]
A=[1,1,2,3], then 
�
=
[
0
,
1
,
1
,
0
]
B=[0,1,1,0].

Unfortunately, Chef completely forgot the array 
�
A and vaguely remembers the parity encoding array 
�
B. He is now wondering whether there exists any valid array 
�
A for which the parity encoding array is 
�
B. Can you help Chef?

Input Format
The first line contains a single integer 
�
T — the number of test cases. Then the test cases follow.
The first line of each test case contains an integer 
�
N — the size of the arrays 
�
A and 
�
B.
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
B 
1
​
 ,B 
2
​
 ,…,B 
N
​
  denoting the parity encoding array 
�
B.
Output Format
For each test case, output YES if there exists any valid array 
�
A for which the parity encoding array is 
�
B. Otherwise, output NO.

You may print each character of YES and NO in uppercase or lowercase (for example, yes, yEs, Yes will be considered identical).

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
 
�
�
∈
{
0
,
1
}
B 
i
​
 ∈{0,1}
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
4
0 1 0 1
5
1 1 1 1 0
6
1 1 1 1 1 1
YES
NO
YES
Explanation:
Test case 
1
1: 
�
=
[
2
,
4
,
3
,
3
]
A=[2,4,3,3] is a valid array for the given array 
�
B.

Test case 
2
2: It can be proven that there does not exist any array 
�
A for the given parity encoding array 
�
B.

Test case 
3
3: 
�
=
[
1
,
2
,
3
,
4
,
5
,
6
]
A=[1,2,3,4,5,6] is a valid array for the given array 
�
B.
*/

/************88888888888***********/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int b[n];
	    int count1=0;
	    for(int i=0;i<n;i++){
	        cin>>b[i];
	        if(b[i]==1){
	            count1++;
	        }
	    }
	    if(n%2==0){
	        if(count1%2==0){
	            cout<<"YES"<<endl;
	        }
	        else cout<<"NO"<<endl;
	    }
	    else{
	        if(count1%2==0){
	            cout<<"NO"<<endl;
	        }
	        else cout<<"YES"<<endl;
	    }
	}
	return 0;
}
