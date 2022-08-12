class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL)
            return false;
        vector<ListNode*> v = {head};
        while(v.back()->next != NULL) {
            v.push_back(v.back()->next);
            for(auto element:v) {
                if(v.back()->next == element)
                    return true;
            }
        }
        return false;
    }
};


class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL)
            return false;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast)
                return true;
        }
        
        
        return false;
    }
};