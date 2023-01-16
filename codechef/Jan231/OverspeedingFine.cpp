/*
Problem
Chef was driving on a highway at a speed of XX km/hour.

To avoid accidents, there are fine imposed on overspeeding as follows:

No fine if the speed of the car \leq 70≤70 km/hour.
Rs 500500 fine if the speed of the car is strictly greater than 7070 and \leq 100≤100.
Rs 20002000 fine if the speed of the car is strictly greater than 100100.
Determine the fine Chef needs to pay.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of a single integer XX denoting the speed of Chef's car.
Output Format
For each test case, output the fine paid by Chef.

Constraints
1 \leq T \leq 2001≤T≤200
1 \leq X \leq 2001≤X≤200
Sample 1:
Input
Output
7
40
110
70
100
69
101
85
0
2000
0
500
0
2000
500
Explanation:
Test case 11: The speed is \leq 70≤70. Thus, Chef does not need to pay any fine.

Test case 22: The speed is greater than 100100. Thus, Chef needs to pay 20002000 as fine.

Test case 33: The speed is \leq 70≤70. Thus, Chef does not need to pay any fine.

Test case 44: The speed is greater than 7070 and \leq 100≤100. Thus, Chef needs to pay 500500 as fine amount.

Test case 55: The speed is \leq 70≤70. Thus, Chef does not need to pay any fine.

Test case 66: The speed is greater than 100100. Thus, Chef needs to pay 20002000 as fine.

Test case 77: The speed is greater than 7070 and \leq 100≤100. Thus, Chef needs to pay 500500 as fine amount.
*/

/************8888888888888*************/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,x;
	cin>>t;
	while(t--){
	    cin>>x;
	    int fine;
	    if(x<=70)fine=0;
	    else if(x>70&&x<=100)fine=500;
	    else fine=2000;
	    cout<<fine<<endl;
	}
	return 0;
}
