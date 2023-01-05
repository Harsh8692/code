/*
Problem
You know that 11 kg of pulp can be used to make 10001000 pages and 11 notebook consists of 100100 pages.

Suppose a notebook factory receives NN kg of pulp, how many notebooks can be made from that?

Input Format
First line will contain TT, the number of test cases. Then the test cases follow.
Each test case contains a single integer NN - the weight of the pulp the factory has (in kgs).
Output Format
For each test case, output the number of notebooks that can be made using NN kgs of pulp.

Constraints
1 \leq T \leq 100 1≤T≤100
1 \leq N \leq 100 1≤N≤100
Sample 1:
Input
Output
3
1
100
50
10
1000
500
Explanation:
Test case-1: 11 kg of pulp can be used to make 10001000 pages which can be used to make 1010 notebooks.

Test case-2: 100100 kg of pulp can be used to make 100000100000 pages which can be used to make 10001000 notebooks.

Test case-3: 5050 kg of pulp can be used to make 5000050000 pages which can be used to make 500500 notebooks.
*/

/****************88888888888888888888888**************************/

#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>n;
	    cout<<(n*1000)/100<<endl;
	}
	return 0;
}