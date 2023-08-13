/*
2816. Double a Number Represented as a Linked List

    User Accepted: 11733
    User Tried: 13368
    Total Accepted: 12030
    Total Submissions: 28250
    Difficulty: Medium

You are given the head of a non-empty linked list representing a non-negative integer without leading zeroes.

Return the head of the linked list after doubling it.

 

Example 1:

Input: head = [1,8,9]
Output: [3,7,8]
Explanation: The figure above corresponds to the given linked list which represents the number 189. Hence, the returned linked list represents the number 189 * 2 = 378.

Example 2:

Input: head = [9,9,9]
Output: [1,9,9,8]
Explanation: The figure above corresponds to the given linked list which represents the number 999. Hence, the returned linked list reprersents the number 999 * 2 = 1998. 

 

Constraints:

    The number of nodes in the list is in the range [1, 104]
    0 <= Node.val <= 9
    The input is generated such that the list represents a number that does not have leading zeros, except the number 0 itself.


*/

#include<bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* doubleIt(ListNode* head) {
        stack<int> st;
        ListNode* currentNode = head;
        while(currentNode!=NULL){
            st.push((currentNode->val));
            
            currentNode = currentNode->next;
        }
        stack<int> st2;
        int carry = 0;
        while(!(st.empty())){
            int a = st.top();
            a = 2*a+carry;
            st.pop();
            // cout<<a%10<<endl;
            st2.push(a%10);
            carry = a/10;
        }
        if(carry!=0){
            // cout<<carry<<endl;
            st2.push(carry);
        }
        ListNode* current=new ListNode(st2.top());//= Listnode(st2.top())
        // current.val = st2.top();
        st2.pop();
        // cout<<st2.top()<<endl;
        
        ListNode* Hd = current;
        while(!(st2.empty())){
            int a = st2.top();
            st2.pop();
            ListNode* child = (new ListNode);
            child->val = a;
            child->next = NULL;
            // cout<<child->val<<endl;
            current->next = child;
            // cout<<current->next<<endl;
            current = child;
        }
        return Hd;
    }
};