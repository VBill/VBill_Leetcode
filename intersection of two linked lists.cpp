class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        set<unsigned long long> all;
        while(headA){
            all.insert((unsigned long long)headA);
            headA=headA->next;
        }
        while(headB){
            if( all.count( (unsigned long long)headB )==0  ){
                    headB=headB->next;
            }else{
                    return headB;
            }
        }
        return NULL;
    }
};
