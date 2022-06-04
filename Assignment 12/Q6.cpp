 class Solution {
public:
    int size(ListNode* head){
        int count=0;
        while(head){
            count++;
            head=head->next;
        }
    
        return count;
    }
    int getDecimalValue(ListNode* head) {
        int num=0;
        int count=size(head)-1;
        while(head){
               if(head->val==1){
                   num=num+pow(2,count);
                   count--;
               }
            else{
                num=num+0;
                count--;
            }
            head=head->next;
        }
        return num;
    }
};
