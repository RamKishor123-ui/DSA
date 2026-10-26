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
    ListNode* deleteMiddle(ListNode* head) {
         ListNode *temp=head;
             ListNode *front=head;
             ListNode *dummynode=new ListNode(-1);
             ListNode *prev=dummynode;
             prev->next=head;
              int cnt=0;
              if(head==nullptr || head->next==nullptr) return nullptr;
              while(temp!=nullptr){
                    cnt++;
                    temp=temp->next;
             }
             for(int i=0;i<cnt/2;i++){
                front=front->next;
                prev=prev->next;
             }
             prev->next=front->next;
             delete front;
             delete dummynode;
             return head;
    }
};