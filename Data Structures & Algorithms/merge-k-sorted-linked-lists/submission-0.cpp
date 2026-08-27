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
 struct compare
 {
bool operator()(const ListNode* a, const ListNode* b)
{
    return a->val > b->val;
}
 };

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, compare> pq;
        if(lists.empty())
        return nullptr;
        for(ListNode* head : lists)
        {
            if(head != nullptr)
            {
                pq.push(head);
            }
        }
        ListNode dummy(0);
        ListNode* temp = &dummy;
        while(!pq.empty())
        {
           ListNode* curr = pq.top();
           pq.pop();
           temp->next = curr;
           temp = curr;
           if(curr->next != nullptr)
           {
            pq.push(curr->next);
           }
        }
        return dummy.next;
    }
};
