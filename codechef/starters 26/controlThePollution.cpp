/*
Problem
There are two types of vehicles in Chefland.

Bus which has a capacity of 100100 people.
Car which has a capacity of 44 people.
There are NN people who want to travel from place AA to place BB. You know that a single bus emits XX units of smoke while a single car emits YY units of smoke in their journey from AA to BB.

You want to arrange some buses and cars to carry all these NN people such that total smoke emitted is minimized. Output the minimized smoke value.

Input Format
First line will contain TT, the number of test cases. Then the test cases follow.
Each test case contains three integers NN, XX, YY - the number of people who want to travel, the units of smoke emitted by a bus and the units of smoke emitted by a car respectively.
Output Format
For each test case, output the minimum units of smoke emitted in transporting the NN people.

Constraints
1 \leq T \leq 10001≤T≤1000
1 \leq N \leq 10001≤N≤1000
1 \leq X, Y \leq 10001≤X,Y≤1000
Sample 1:
Input
Output
3
9 40 8
15 20 20
105 80 10
24
20
100
Explanation:
Test case-1: In the optimal case, we will use 33 cars where the 11-st and 22-nd car will carry 44 people each and the 33-rd car will carry 11 person.

Therefore smoke emitted = 3 \times 8 = 24=3×8=24 units.

Test case-2: In the optimal case, we will use 11 bus to carry all the 1515 people.

Therefore smoke emitted = 1 \times 20 = 20=1×20=20 units.

Test case-3: In the optimal case, we will use 11 bus to carry 100100 people and use 22 cars to carry the remaining 55 people.

Therefore smoke emitted = 1 \times 80 + 2 \times 10 = 100=1×80+2×10=100 units.


*/

/**********88888888888************/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,x,y;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>n>>x>>y;
	    int nbusonly,ncaronly,nmixbus,nmixcar;
	    if(n%100==0)nbusonly=n/100;
	    else nbusonly = (n/100)+1;
	    if(n%4==0)ncaronly=n/4;
	    else ncaronly = n/4+1;
	    nmixbus=n/100;
	    if((n%100)%4==0)nmixcar=(n%100)/4;
	    else nmixcar = (n%100)/4 +1;
	    int a[3]={0};
	    a[0]=nbusonly*x;
	    a[1]=ncaronly*y;
	    a[2]=nmixbus*x+nmixcar*y;
	    cout<<*min_element(a,a+3)<<endl;
	}
	return 0;
}
