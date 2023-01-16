/*
Problem
Alice, Bob, and, Chef are standing on the coordinate plane. Chef is standing at the origin (coordinates (0, 0)(0,0)) while the location of Alice and Bob are (X_1, Y_1)(X 
1
​
 ,Y 
1
​
 ) and (X_2, Y_2)(X 
2
​
 ,Y 
2
​
 ) respectively.

Amongst Alice and Bob, find out who is at a farther distance from Chef or determine if both are at the same distance from Chef.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
The first and only line of each test case contains four space-separated integers X_1, Y_1, X_2,X 
1
​
 ,Y 
1
​
 ,X 
2
​
 , and Y_2Y 
2
​
  — the coordinates of Alex and Bob.
Output Format
For each test case, output on a new line:

ALEX, if Alex is at a farther distance from Chef.
BOB, if Bob is at a farther distance from Chef.
EQUAL, if both are standing at the same distance from Chef.
You may print each character in uppercase or lowercase. For example, Bob, BOB, bob, and bOB, are all considered identical.

Constraints
1 \leq T \leq 20001≤T≤2000
-1000 \leq X_1, Y_1, X_2, Y_2 \leq 1000−1000≤X 
1
​
 ,Y 
1
​
 ,X 
2
​
 ,Y 
2
​
 ≤1000
Sample 1:
Input
Output
3
-1 0 3 4
3 4 -4 -3
8 -6 0 5
BOB
EQUAL
ALEX
Explanation:
Test case 11: Alex is at a distance 11 from Chef while Bob is at distance 55 from Chef. Thus, Bob is at a farther distance.

Test case 22: Alex is at a distance 55 from Chef and Bob is also at distance 55 from Chef. Thus, both are at the same distance.

Test case 33: Alex is at a distance 1010 from Chef while Bob is at distance 55 from Chef. Thus, Alex is at a farther distance.
*/

/**********88888888*********/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,x1,x2,y1,y2;
    cin>>t;
    while(t--){
        cin>>x1>>y1>>x2>>y2;
        int r12=x1*x1+y1*y1;
        int r22=x2*x2+y2*y2;
        if(r12>r22)cout<<"ALEX"<<endl;
        else if(r22>r12)cout<<"BOB"<<endl;
        else cout<<"EQUAL"<<endl;
    }
    return 0;
}