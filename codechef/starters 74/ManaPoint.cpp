/*
Problem
Chef is playing a mobile game. In the game, Chef's character Chefario can perform special attacks. However, one special attack costs 
�
X mana points to Chefario.

If Chefario currently has 
�
Y mana points, determine the maximum number of special attacks he can perform.

Input Format
The first line contains a single integer 
�
T — the number of test cases. Then the test cases follow.
The first and only line of each test case contains two space-separated integers 
�
X and 
�
Y — the cost of one special attack and the number of mana points Chefario has initially.
Output Format
For each test case, output the maximum number of special attacks Chefario can perform.

Constraints
1
≤
�
≤
1
0
5
1≤T≤10 
5
 
1
≤
�
≤
100
1≤X≤100
1
≤
�
≤
1000
1≤Y≤1000
Sample 1:
Input
Output
3
10 30
6 41
50 2
3
6
0
Explanation:
Test case 
1
1: Chefario can perform a maximum of 
3
3 special attacks which will cost him 
30
30 mana points.

Test case 
2
2: Chefario can perform a maximum of 
6
6 special attacks which will cost him 
36
36 mana points. Note that Chefario can not perform 
7
7 special attacks as these will cost him 
42
42 mana points while he has only 
41
41 mana points.

Test case 
3
3: Chefario will not be able to perform any special attacks in this case.
*/


/*************888888888888888************/

#include <iostream>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    cout<<y/x<<endl;
	}
	return 0;
}
