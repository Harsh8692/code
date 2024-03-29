/*
Problem
In a recent breakthrough, sequences which do not have Arithmetic Progressions (APs) of size 3, were studied. Let us try a simple problem related to that.

Consider a sequence 
�
1
≤
�
2
≤
…
≤
�
�
A 
1
​
 ≤A 
2
​
 ≤…≤A 
n
​
 . Three elements from it, say 
�
�
,
�
�
,
�
�
A 
i
​
 ,A 
j
​
 ,A 
k
​
 , where 
�
<
�
<
�
i<j<k, are said to form an AP, if 
(
�
�
−
�
�
)
=
(
�
�
−
�
�
)
(A 
j
​
 −A 
i
​
 )=(A 
k
​
 −A 
j
​
 ). Call the sequence AP-Free, if no such three elements can be found.

Your goal is to find out whether the given sequence is AP-Free or not.

Input Format
The first line of input will contain a single integer 
�
T, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains a single integer 
�
N — the size of the sequence.
The next line contains 
�
N integers - 
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
n
​
 , which is the sequence.
Output Format
For each test case, output on a new line, "YES", if the sequence is AP-Free. Output "NO" if it is not.

You may print each character in uppercase or lowercase. For example, Yes, yes, YES, and yES are all considered identical.

Constraints
1
≤
�
≤
10
1≤T≤10
3
≤
�
≤
100
3≤N≤100
1
≤
�
�
≤
1000000
1≤A 
i
​
 ≤1000000
�
1
≤
�
2
≤
…
≤
�
�
A 
1
​
 ≤A 
2
​
 ≤…≤A 
n
​
 
Sample 1:
Input
Output
4
3
1 2 3
3
1 2 4
3
10 25 40
4
1 10 11 21
No
Yes
No
No
Explanation:
Testcase 1: The given sequence is 
(
1
,
2
,
3
)
(1,2,3). Here, you can select all the three elements, and they form an AP, since 
(
2
−
1
)
=
(
3
−
2
)
=
1
(2−1)=(3−2)=1. Hence, this sequence is not AP-Free.

Testcase 2: The given sequence is 
(
1
,
2
,
4
)
(1,2,4). No three elements form an AP. Hence, this sequence is AP-Free.

Testcase 3: The given sequence is 
(
10
,
25
,
40
)
(10,25,40). Here, you can select all the three elements, and they form an AP, since 
(
25
−
10
)
=
(
40
−
25
)
=
15
(25−10)=(40−25)=15. Hence, this sequence is not AP-Free.

Testcase 4: The given sequence is 
(
1
,
10
,
11
,
21
)
(1,10,11,21). Here, you can select 
(
�
1
,
�
3
,
�
4
)
(A 
1
​
 ,A 
3
​
 ,A 
4
​
 ), and they form an AP, since 
(
11
−
1
)
=
(
21
−
11
)
=
10
(11−1)=(21−11)=10. Hence, this sequence is not AP-Free.
*/

#include <iostream>
using namespace std;
// #define ll long long;

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
	    int flag = 0;
	    for(int i=0;i<n;i++){
	        for(int j=i+1;j<n;j++){
	            for(int k=j+1;k<n;k++){
	                if(a[j]-a[i]==a[k]-a[j]){
	                    flag=1;
	                    cout<<"No"<<endl;
	                    goto end;
	                }
	            }
	        }
	    }
	    end: 
	    if(flag==0){
	        cout<<"Yes"<<endl;
	    }
	   // flag==0;
	}
	return 0;
}
