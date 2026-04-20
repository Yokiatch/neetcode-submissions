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
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        vector<int> v;
        while(temp){
            v.push_back(temp->val);
            temp = temp->next;
        }
        ListNode* curr = head;
        for(int i=v.size()-1; i>=0; i--){
            curr->val = v[i];
            curr = curr->next;
        }
        return head;
    }
};
