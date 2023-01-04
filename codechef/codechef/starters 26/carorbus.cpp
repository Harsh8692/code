/*
Problem
Chef wants to reach home as soon as possible. He has two options:

Travel with his BIKE which takes XX minutes.
Travel with his CAR which takes YY minutes.
Which of the two options is faster or do they both take same time?

Input Format
First line will contain TT, number of test cases. Then the test cases follow.
Each test case contains a single line of input, two integers X, YX,Y representing the time taken to travel with BIKE and CAR respectively.
Output Format
For each test case, print CAR if travelling with Car is faster, BIKE if travelling with Bike is faster, SAME if they both take the same time.

You may print each character of CAR, BIKE and SAME in uppercase or lowercase (for example, CAR, Car, cAr will be considered identical).

Constraints
1 \leq T \leq 1001≤T≤100
1 \leq X,Y \leq 101≤X,Y≤10
Sample 1:
Input
Output
3
1 5
4 2
6 6
BIKE
CAR
SAME
Explanation:
Test case-1: Travelling with BIKE takes 11 minute while travelling with CAR takes 55 minutes. So travelling with BIKE is faster.

Test case-2: Travelling with BIKE takes 44 minutes while travelling with CAR takes 22 minutes. So travelling with CAR is faster.

Test case-3: Travelling with both BIKE and CAR takes the SAME time i.e. 66 minutes.
*/

/**************************************************/

#include <iostream>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>x>>y;
	    if(x<y)cout<<"BIKE"<<endl;
	    else if(x==y) cout<<"SAME"<<endl;
	    else cout<<"CAR"<<endl;
	}
	return 0;
}
