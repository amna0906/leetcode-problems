class Solution {
public:
    bool hasCycle(ListNode *head) {

        set<ListNode*> visited;

        while (head != NULL) {

            if (visited.find(head) != visited.end()) {
                return true;
            }

            visited.insert(head);
            head = head->next;
        }

        return false;
    }
};