/*
Problem
Alice thinks Bob has very weak math skills.
Alice gave Bob three numbers A, B,A,B, and CC and challenged him to find any positive integer KK strictly less than 100100 such that none of the three numbers are divisible by KK.

Help Bob find one such integer KK.

Under the given constraints, a valid KK will always exist.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
The first and only line of each test case contains three space-separated integers A, B,A,B, and CC.
Output Format
For each test case, output on a new line any positive integer KK less than 100100 that does not divide any of A, B,A,B, or CC.

Constraints
1 \leq T \leq 10001≤T≤1000
2 \leq A , B , C \leq 1002≤A,B,C≤100
Sample 1:
Input
Output
3
2 3 4
5 7 10
3 6 9
5
4
10
Explanation:
Test case 11: None of 2, 3,2,3, or 44 are divisible by 55.

Test case 22: None of 5, 7,5,7, or 1010 are divisible by 44.

Test case 33: None of 3, 6,3,6, or 99 are divisible by 1010.
*/

/*----------------------------------------------*/

#include <iostream>
using namespace std;

int main() {
	int t,a,b,c;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>a>>b>>c;
	    for(int j=2;j<100;j++){
	        if(a%j!=0&&b%j!=0&&c%j!=0){
	            cout<<j<<endl;
	            break;
	        }
	    }
	}
	return 0;
}
