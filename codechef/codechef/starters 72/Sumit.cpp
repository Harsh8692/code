/*
Problem
Bob received an assignment from his school: he has two numbers AA and BB, and he has to find the sum of these two numbers.
Alice, being a good friend of Bob, told him that the answer to this question is CC.
Bob doesn't completely trust Alice and asked you to tell him if the answer given by Alice is correct or not.
If the answer is correct print "YES", otherwise print "NO" (without quotes).

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
The first and only line of each test case consists of three space-separated integers A, B,A,B, and CC.
Output Format
For each test case, output on a new line the answer: YES if Alice gave the right answer, and NO otherwise.

Each character of the output may be printed in either uppercase or lowercase, i.e, the outputs Yes, YES, yEs and yes will be treated as equivalent.

Constraints
1 \leq T \leq 1001≤T≤100
0 \leq A , B , C \leq 1000≤A,B,C≤100
Sample 1:
Input
Output
3
1 2 3
4 5 9
2 3 6
YES
YES
NO
Explanation:
Test case 11: 1+2 = 31+2=3, so Alice's answer is correct.

Test case 22: 4+5 = 94+5=9, so Alice's answer is correct.

Test case 33: 2+3=52+3=5 which doesn't equal 66, so Alice's answer is incorrect.
*/

/*****8888888*********/

#include <iostream>
using namespace std;

int main() {
	int t,a,b,c;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>a>>b>>c;
	    if((a+b)==c)cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}