/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

brute force :: using hashing;

time -> O(n*time taking to do mpp.find and all operation)
space -> O(n)

class Solution {
public:
    bool hasCycle(ListNode *head) {
        map<ListNode*,int> mpp;
        ListNode* temp = head;

        while(temp != NULL)
        {
            if(mpp.find(temp) != mpp.end()) {
                return true;
            }
            mpp[temp]++;
            temp = temp -> next;
        }
        return false;
    }
};

// optimal sol fast and slow pointer ;
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *slow = head, *fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) return true; // Cycle detected
        }

        return false; // No cycle
    }
};

