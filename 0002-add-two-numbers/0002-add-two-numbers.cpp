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
    ListNode* add(ListNode* first,int x){
        ListNode* temp=new ListNode(x);
        if(first==nullptr){
            first=temp;
        }else{
            ListNode* curr=first;
            while(curr->next!=nullptr){
                curr=curr->next;
            }
            curr->next=temp;
        }
        return first;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3=nullptr;
        int carry=0;
        while(l1!=nullptr && l2!=nullptr){
            int sum=l1->val+l2->val+carry;
            carry=sum/10;
            sum=sum%10;
            l3=add(l3,sum);
            l1=l1->next;
            l2=l2->next;
        }

        while(l1!=nullptr){
            int sum=l1->val+carry;
            carry=sum/10;
            sum=sum%10;
            l3=add(l3,sum);
            l1=l1->next;
        }

        while(l2!=nullptr){
            int sum=l2->val+carry;
            carry=sum/10;
            sum=sum%10;
            l3=add(l3,sum);
            l2=l2->next;
        }

        if(carry!=0){
            l3=add(l3,carry);
        }

        return l3;
    }
};