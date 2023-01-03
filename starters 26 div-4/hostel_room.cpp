/*
Problem
There are initially XX people in a room.

You are given an array AA of length NN which describes the following events:

If A_i \geq 0A 
i
​
 ≥0, then A_iA 
i
​
  people enter the room at ii-th minute. For e.g. if A_2 = 3A 
2
​
 =3, then 33 people enter the room at the 22-nd minute.
If A_i \lt 0A 
i
​
 <0, then |A_i|∣A 
i
​
 ∣ people leave the room at ii-th minute. Here |A_i|∣A 
i
​
 ∣ denotes the absolute value of A_iA 
i
​
 . For e.g. if A_4 = -2A 
4
​
 =−2, then 22 people leave the room at the 44-th minute.
Determine the maximum number of people in the room at any moment of time.

It is guaranteed in the input that at any moment of time, the number of people in the room does not become negative.

Input Format
The first line will contain TT - the number of test cases. Then the test cases follow.
The first line of each test case consists of two integers NN and XX - the length of the array AA and the number of people in the room initially.
The second line of each test case contains NN integers A_1, A_2, A_3, \dots A_NA 
1
​
 ,A 
2
​
 ,A 
3
​
 ,…A 
N
​
 .
Output Format
For each testcase, output the maximum number of people in the room at any point of time.

Constraints
1 \leq T \leq 1001≤T≤100
1 \leq N \leq 1001≤N≤100
0 \leq X \leq 1000≤X≤100
-100 \leq A_i \leq 100−100≤A 
i
​
 ≤100
Sample 1:
Input
Output
3
5 8
0 3 3 -13 5
4 5
0 -2 2 3
3 5
-2 5 -2
14
8
8
Explanation:
Test case-1: In the 33-rd minute, the room contains 8 + 0 + 3 + 3 = 148+0+3+3=14 people which is the maximum number of people in the room at any point of time.

Test case-2: In the 44-th minute, the room contains 5 + 0 - 2 + 2 + 3 = 85+0−2+2+3=8 people which is the maximum number of people in the room at any point of time.

Test case-3: In the 22-nd minute, the room contains 5 - 2 + 5 = 85−2+5=8 people which is the maximum number of people in the room at any point of time.
*/

/********888888888888************/

#include <iostream>
using namespace std;

int main() {
	int t,n,x;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>n>>x;
	    int a[n];
	    int max = x;
	    int newmax = x;
	    for(int j=0;j<n;j++){
	        cin>>a[j];
	        newmax+=a[j];
	        if(newmax>max)max=newmax;
	    }
	    cout<<max<<endl;
	}
	return 0;
}
