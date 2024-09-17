#include <bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode():val(0),next(nullptr){};
    ListNode(int x):val(x),next(nullptr){};
    ListNode(int x,ListNode *next):val(x),next(next){};
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *current1 = list1;
        ListNode *current2 = list2;
        while(current1==NULL || current2==NULL){
            if(current1->val==current2->val){
                current1->next = current2;
            }else if (current1->val>current2->val)
            {
                
            }
            
        }
    }
};

int main()
{
    return 0;
}