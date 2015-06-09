class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while(head && head->val==val)head=head->next;
        ListNode *pre=head, *pt=head;
        while(pt){
            if(pt->val==val){
                pre->next=pt->next;
                //delete pt;
                pt=pre->next;
            }else{
                pre=pt;
                pt=pt->next;
            }
        }

        return head;
    }
};
