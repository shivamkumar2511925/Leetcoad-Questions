class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* S = head;
        ListNode* F = head;
        while(F!=NULL && F->next!=NULL){
            S=S->next;
            F=F->next->next;
            if(S==F){
                return true;
            }
        }
        return false;
        
    }
};