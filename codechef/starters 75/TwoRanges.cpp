/*
Problem
Chef has two ranges 
[
�
,
�
]
[A,B] and 
[
�
,
�
]
[C,D]. Chef needs to find the number of integers that belong to at least one of the ranges.

Note: A range 
[
�
,
�
]
[P,Q] contains all the integers 
{
�
,
�
+
1
,
�
+
2
,
…
,
�
−
1
,
�
}
{P,P+1,P+2,…,Q−1,Q}.

Input Format
The first line of input will contain a single integer 
�
T, denoting the number of test cases.
Each test case consists of a single line containing 
4
4 integers 
�
,
�
,
�
,
A,B,C, and 
�
D, as mentioned in the statement.
Output Format
For each test case, output on a new line, the number of integers that belong to at least one of the ranges.

Constraints
1
≤
�
≤
1000
1≤T≤1000
1
≤
�
≤
�
≤
8
1≤A≤B≤8
1
≤
�
≤
�
≤
8
1≤C≤D≤8
Sample 1:
Input
Output
4
1 3 5 5
3 8 2 5
1 8 4 6
5 5 5 5
4
7
8
1
Explanation:
Test case 
1
1: There are 
4
4 integers that belong to at least one of the ranges. These are 
1
,
2
,
3
,
1,2,3, and 
5
5.

Test case 
2
2: There are 
7
7 integers that belong to at least one of the ranges. These are 
2
,
3
,
4
,
5
,
6
,
7
,
2,3,4,5,6,7, and 
8
8.

Test case 
3
3: There are 
8
8 integers that belong to at least one of the ranges. These are 
1
,
2
,
3
,
4
,
5
,
6
,
7
,
1,2,3,4,5,6,7, and 
8
8.

Test case 
4
4: There is only 
1
1 integer that belong to at least one of the ranges. That integer is 
5
5.
*/

/***********88888888********/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c,d;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c>>d;
	    if(a<c){
	        if(b<c){
	            cout<<b-a+d-c+2<<endl;
	        }
	        else{
	            if(b<d) cout<<d-a+1<<endl;
	            else cout<<b-a+1<<endl;
	        }
	    }
	    else if(a==c){
	        if(d>b){
	            cout<<d-c+1<<endl;
	        }
	        else cout<<b-c+1<<endl;
	    }
	    else{
	        if(d<a){
	            cout<<d-c+b-a+2<<endl;
	        }
	        else{
	            if(d<b) cout<<b-c+1<<endl;
	            else cout<<d-c+1<<endl;
	        }
	    }
	}
	return 0;
}
