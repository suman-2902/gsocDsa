class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
         if(!head || !head->next) return head;
        ListNode* prev = head;
        ListNode* curr = head->next;
        
        while(curr && prev){
            if(prev->val == curr->val){
                prev->next = curr->next;
                curr->next = NULL;
                curr = prev->next;
            }
            else{
                prev = prev->next;
                curr = curr->next;
            }
        }
        return head;
        
    }
};
