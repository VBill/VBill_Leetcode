class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head=new ListNode(0);
        head->next=NULL;//create head
        ListNode *pt=head;//pt to end of list
        bool up=false;
        int x=0;
        while(l1 && l2){
            pt->next=new ListNode(0);
            pt=pt->next;//new node and move
            pt->next=NULL;
            pt->val=0;//init the node
            if(up)
                (pt->val)++;//add jinwei
            x=l1->val + l2->val + pt->val;//add
            if(x>=10){
                up=true;
                x=x%10;
            }else{
                up=false;
            }//jinwei
            pt->val=x;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1){
            pt->next=new ListNode(0);
            pt=pt->next;//new node and move
            pt->next=NULL;
            pt->val=0;//init node
            if(up)
                (pt->val)++;//add jinwei
            x=l1->val + pt->val;
            if(x>=10){
                up=true;
                x=x%10;
            }else{
                up=false;
            }//jinwei
            pt->val=x;
            l1=l1->next;
        }

        while(l2){
            pt->next=new ListNode(0);
            pt=pt->next;//new node and move
            pt->next=NULL;
            pt->val=0;//init node
            if(up)
                (pt->val)++;//add jinwei
            x=l2->val + pt->val;
            if(x>=10){
                up=true;
                x=x%10;
            }else{
                up=false;
            }//jinwei
            pt->val=x;
            l2=l2->next;
        }

        if(up){
            pt->next=new ListNode(0);
            pt=pt->next;//new node and move
            pt->next=NULL;
            pt->val=1;
        }

        return head->next;
    }
};
