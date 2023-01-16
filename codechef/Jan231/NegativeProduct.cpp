/*
Problem
Chef is given three numbers A, B,A,B, and CC.

He wants to find whether he can select exactly two numbers out of these such that the product of the selected numbers is negative.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of three integers A, B,A,B, and CC, the given numbers.
Output Format
For each test case, output YES if Chef can select exactly two numbers out of these such that the product of the selected numbers is negative, NO otherwise.

You may print each character in uppercase or lowercase. For example, the strings NO, no, No, and nO, are all considered identical.

Constraints
1 \leq T \leq 10001≤T≤1000
-10 \leq A, B, C \leq 10−10≤A,B,C≤10
Sample 1:
Input
Output
5
1 5 7
-5 0 4
6 -1 0
-3 -5 -2
0 0 -4
NO
YES
YES
NO
NO
Explanation:
Test case 11: There exists no way to select two numbers such that their product is negative.

Test case 22: The product of -5−5 and 44 is -5\cdot 4 = -20−5⋅4=−20 which is negative.

Test case 33: The product of 66 and -1−1 is 6\cdot (-1) = -66⋅(−1)=−6 which is negative.

Test case 44: There exists no way to select two numbers such that their product is negative.

Test case 55: There exists no way to select two numbers such that their product is negative.
*/

/****************8888888888***************/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c;
	    if(a*b<0||b*c<0||a*c<0)cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}
