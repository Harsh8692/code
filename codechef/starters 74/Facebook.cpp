/*
Problem
A post on facebook is said to be more popular if the number of likes on the post is strictly greater than the number of likes on some other post. In case the number of likes is same, the post having more comments is more popular.

Given arrays 
�
A and 
�
B, each having size 
�
N, such that the number of likes and comments on the 
�
�
ℎ
i 
th
  post are 
�
�
A 
i
​
  and 
�
�
B 
i
​
  respectively, find out which post is most popular.

It is guaranteed that the number of comments on all the posts is distinct.

Input Format
The first line of input will contain a single integer 
�
T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains a single integer 
�
N, the number of posts.
The second line of each test case contains 
�
N space-separated integers 
�
1
,
�
2
,
…
,
�
�
A 
1
​
 ,A 
2
​
 ,…,A 
N
​
  — where 
�
�
A 
i
​
  is the number of likes on the 
�
�
ℎ
i 
th
  post.
The third line of each test case contains 
�
N space-separated integers 
�
1
,
�
2
,
…
,
�
�
B 
1
​
 ,B 
2
​
 ,…,B 
N
​
  — where 
�
�
B 
i
​
  is the number of comments on the 
�
�
ℎ
i 
th
  post.
Output Format
For each test case, output on a new line, an integer in the range 
1
1 to 
�
N, denoting the index of the post which is most popular among the 
�
N posts.

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
1
0
5
1≤N≤10 
5
 
1
≤
�
�
,
�
�
≤
2
⋅
1
0
5
1≤A 
i
​
 ,B 
i
​
 ≤2⋅10 
5
 
The elements of array 
�
B are distinct.
It is guaranteed that the sum of 
�
N over all test case does not exceed 
2
⋅
1
0
5
2⋅10 
5
 .
Sample 1:
Input
Output
4
3
5 4 4
1 2 3
3
10 10 9
2 5 4
3
3 3 9
9 1 3
4
2 8 1 5
2 8 1 9
1
2
3
2
Explanation:
Test case 
1
1: The number of likes on the first post is greater than that of second and third post. Thus, the first post is most popular.

Test case 
2
2: The first and second post have maximum number of likes. But, the second post has more comments than the first post. Thus, the second post is most popular.

Test case 
3
3: The number of likes on the third post is greater than that of first and second post. Thus, the third post is most popular.

Test case 
4
4: The number of likes on the second post is greater than that of first, third, and fourth post. Thus, the second post is most popular.
*/

/*******888888***********/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n]; int b[n];
	    cin>>a[0];
	    int maxlikeIdx=0;
	    for(int i=1;i<n;i++){
	        cin>>a[i];
	        if(a[i]>a[maxlikeIdx])maxlikeIdx=i;
	    }
	   // int maxcommentIdx=0;
	    for(int i=0;i<n;i++){
	        cin>>b[i];
	    }
	    int like[n];
	   // vector<int> likeIdxMax;
	   // vector<int> commentIdxMax;
	    for(int i=0;i<n;i++){
	        if(a[i]==a[maxlikeIdx]){
	           // likeIdxMax.push_back(i);
	           like[i]=i;
	           // commentIdxMax.push_back(i);
	        }
	        else like[i]=-1;
	    }
	   // int maxele=*max_element();
	    vector <int> comment;
	    vector<int> value;
	    for(int i=0;i<n;i++){
	        if(like[i]!=-1){
	            comment.push_back(i);
	            value.push_back(b[i]);
	        }
	    }
	    int max=0;
	    for(int i=0;i<value.size();i++){
	        if(value[i]>value[max])max=i;
	    }
	    cout<<comment[max]+1<<endl;
	   // if(likeIdxMax.size()==1){
	   //     cout<<likeIdxMax[0]+1<<endl;
	   // }
	   // else{
	   //     int maxidx=0;
	   //     for(int i=0;i<likeIdxMax.size();i++){
	   //         if(b[likeIdxMax[i]]>b[likeIdxMax[maxidx]])maxidx=i;
	   //     }
	   //     cout<<maxidx+1<<endl;
	   // }
	}
	return 0;
}
