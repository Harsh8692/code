/*
Problem
Chef calls a number lucky if it contains the digit 77 at least once.

Given a number XX, determine if it is a lucky number or not.

Input Format
The first line contains a single integer TT — the number of test cases. Then the test cases follow.
The first and only line of each test case contains an integer XX — the number mentioned in the problem statement.
Output Format
For each test case, output YES if XX is a lucky number. Otherwise, output NO.

You may print each character of YES and NO in uppercase or lowercase (for example, yes, yEs, Yes will be considered identical).

Constraints
1 \leq T \leq 10001≤T≤1000
1 \le X \le 10^91≤X≤10 
9
 
Sample 1:
Input
Output
4
6
478
2090
77777
NO
YES
NO
YES
Explanation:
Test Case 1: The number 66 is not lucky since it does not contain the digit 77.

Test Case 2: The number 478478 is lucky since it contains the digit 77 at least once.

Test Case 3: The number 20902090 is not lucky since it does not contain the digit 77.

Test Case 4: The number 7777777777 is lucky since it contains the digit 77 at least once.
*/

/*******88888888888***********/

#include <iostream>
using namespace std;

int main() {
	int t,x;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>x;
	    int flag=0;
	    while(x!=0){
	        if(x%10==7){
	            cout<<"YES"<<endl;
	            flag++;
	            break;
	        }
	        x/=10;
	    }
	    if(flag==0){
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
