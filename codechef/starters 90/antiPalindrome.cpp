/*
Problem
Definitions:

A string 
�
T is called semi-palindrome if you can rearrange the characters of 
�
T to make it into a palindrome.
For eg. if 
�
=
�
�
�
�
T=aabb, it isn't a palindrome as of now, but it can be rearranged to form 
�
�
�
�
abba, which is a palindrome. Thus, 
�
=
�
�
�
�
T=aabb is a semi-palindrome.

An anti-palindrome is the opposite of a semi-palindrome. In particular, a string 
�
T is called an anti-palindrome if it is not possible to rearrange the characters of 
�
T to make it into a palindrome.
For eg. if 
�
=
�
�
�
T=abc, there is no rearrangement of this string which makes it into a palindrome. Hence, 
�
=
�
�
�
T=abc is an anti-palindrome.

Now on to the problem:

You are given a string 
�
=
�
1
�
2
…
�
�
S=S 
1
​
 S 
2
​
 …S 
N
​
  consisting of 
�
N english lowercase letters.

Your aim is to convert 
�
S into an anti-palindrome. For this, you are allowed to do the following operation as many times as you want (even 0 times) :

Select an index 
�
i 
(
1
≤
�
≤
�
)
(1≤i≤N) and change 
�
�
S 
i
​
  to any other english lowercase letter.
Find the minimum number of operations needed to make 
�
S into an anti-palindrome.

Note: It can be proven that for the given constraints (
2
≤
�
≤
1
0
5
2≤N≤10 
5
 ), it is always possible to make 
�
S into an anti-palindrome using the operations.

Input Format
The first line of input will contain a single integer 
�
C, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains an integer 
�
N — the length of the string 
�
S.
The next line contains the string 
�
S of length 
�
N.
Output Format
For each test case, output the minimum number of operations needed to make 
�
S into an anti-palindrome.

Constraints
1
≤
�
≤
5
⋅
1
0
5
1≤C≤5⋅10 
5
 
2
≤
�
≤
1
0
5
2≤N≤10 
5
 
�
S contains only english lowercase letters.
The sum of 
�
N over all testcases won't exceed 
1
0
5
10 
5
 .
Sample 1:
Input
Output
5
2
ab
2
aa
3
abc
3
aaa
3
abb
0
1
0
2
1
Explanation:
Testcase 1: The given string 
�
�
ab is already an anti-palindrome, since there is no way to rearrange the letters to make it into a palindrome. So, we don't need to do any operations on it to make it an anti-palindrome. Hence the answer is 
0
0.

Testcase 2: The given string 
�
�
aa is a palindrome, and so it is not an anti-palindrome. We can change it to 
�
�
ab using 
1
1 operation, and it becomes an anti-palindrome. Hence the answer is 
1
1.

Testcase 3: The given string 
�
�
�
abc is already an anti-palindrome, since there is no way to rearrange the letters to make it into a palindrome. So, we don't need to do any operations on it to make it an anti-palindrome. Hence the answer is 
0
0.

Testcase 4: The given string 
�
�
�
aaa is a palindrome, and so it is not an anti-palindrome. We can change it to 
�
�
�
abc using 
2
2 operations, and it becomes an anti-palindrome. There is no way to make it into an anti-palindrome using only 1 operation. Hence the answer is 
2
2.

Testcase 5: The given string 
�
�
�
abb is a semi-palindrome, since it can be rearranged to form 
�
�
�
bab which is a palindrome. So 
�
�
�
abb is not an anti-palindrome. We can change it to 
�
�
�
abc using 
1
1 operation, and it becomes an anti-palindrome. Hence the answer is 
1
1.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int c,n;
	cin>>c;
	while(c--){
	    cin>>n;
	    string s;
	    cin>>s;
	    unordered_map<char,int>mp;
	    for(int i=0;i<n;i++){
	        if(mp.find(s[i])==mp.end()){
	            mp.insert({s[i],1});
	        }
	        else{
	            mp[s[i]]++;
	        }
	    }
	    int nOdd=0;
	    for(auto it:mp){
	        if(it.second%2!=0)nOdd++;
	    }
	    if(nOdd>=2){
	        cout<<0<<endl;
	    }
	    else{
	        if(nOdd==1){
	            if(mp.size()>=2){
	                cout<<1<<endl;
	            }
	            else cout<<2<<endl;
	        }
	        else{
	            if(mp.size()==1){
	                if(mp[s[0]]>2)cout<<1<<endl;
	                else cout<<1<<endl;
	            }
	            else cout<<1<<endl;
	        }
	    }
	}
	return 0;
}
