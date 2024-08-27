/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        ListNode* dummy = new ListNode (-1);
        ListNode* curr=dummy;
        int carry=0,sum=0;
        while(temp1!=NULL || temp2!=NULL)
        {
            sum=carry;
            if(temp1) 
            {sum=sum+temp1->val;
             temp1=temp1->next;
            }
            if(temp2) 
            {
               sum=sum+temp2->val;
                temp2=temp2->next;
            }
            ListNode* newNode = new ListNode(sum%10);
            carry=sum/10;
            curr->next=newNode;
            curr=curr->next;
        }
        if(carry)
        {
           ListNode* newNode = new ListNode (carry);
           curr->next=newNode;
        }
        return dummy->next;
    }
};
