/*
Problem
Chef has a sequence of integers AA of length NN. He creates another sequence BB of length 2 \cdot N2⋅N using sequence AA. Initially, BB is empty. Chef performs the following process.

For each element A_iA 
i
​
  (1 \le i \le N)(1≤i≤N) of AA:

Choose any arbitrary integer kk (Note that the value of kk can be different for different elements).
Add A_i-kA 
i
​
 −k and A_i+kA 
i
​
 +k to BB.
Chef then shuffles the sequence BB randomly after this process.

Since Chef is careless, he lost both AA and BB and now only vaguely remembers the elements of BB. Chef would like to know if the sequence BB (which he vaguely remembers) can be correct or not. Can you help him?

Formally, you are provided with a sequence BB of size 2 \cdot N2⋅N. You are required to tell if the provided sequence can be achieved from any sequence AA of size NN using the given process or not.

Input Format
The first line of the input contains a single integer TT - the number of test cases. The description of TT test cases follows.
The first line of each test case contains a single integer NN.
The second line of each test case contains 2 \cdot N2⋅N space-separated integers B_1,B_2, \dots,B_{2 \cdot N}.B 
1
​
 ,B 
2
​
 ,…,B 
2⋅N
​
 .
Output Format
For each test case, print YES if the provided sequence BB can be achieved from any sequence AA of size NN using the given process. Otherwise, print NO.
You may print each character of YES and NO in uppercase or lowercase (for example, the strings yEs, yes, Yes and YES will be treated identical).

Constraints
1 \leq T \leq 10^41≤T≤10 
4
 
1 \leq N \leq 10^51≤N≤10 
5
 
|B| = 2 \cdot N∣B∣=2⋅N
- 10^5 \leq B_i \leq 10^5−10 
5
 ≤B 
i
​
 ≤10 
5
 
It is guaranteed that the sum of NN over all test cases does not exceed 2 \cdot 10^52⋅10 
5
 
Sample 1:
Input
Output
3
1
1 1
2
16 2 2022 2001
2
2 4 -2 4
YES
NO
YES
Explanation:
Test case 11: The given sequence BB can be generated using A = [1]A=[1] with k=0k=0 for A_1A 
1
​
 .
Test case 22: There doesn't exist any sequence AA which can generate the given sequence BB by simulating the given process.
Test case 33: The given sequence BB can be generated using A = [4,0]A=[4,0] with k= 0k=0 for A_1A 
1
​
  and k=-2k=−2 for A_2A 
2
​
 .
*/

/****************************************/

#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>n;
	    int b[2*n];
	    int sum=0;
	    for(int j=0;j<2*n;j++){
	        cin>>b[j];
	        sum+=b[j];
	    }
	    if(sum%2==0)cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}
