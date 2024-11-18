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

brute approach::->

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* mover = head;
        int count = 0;
        int pos = -1;

        //O(n);
        while(mover != NULL)
        {
            count++;
            mover = mover -> next;
        }

        if(count % 2 == 0) {
            pos = (count/2) + 1;
        }else {
            pos = count/2 + 1;
        }

        mover = head;
        int c = 0;

        //O(n/2);
        while(mover != NULL)
        {
            c++;
            if(c == pos) {
                return mover;
            }
            mover = mover -> next;
        }

        return nullptr;
    }
};



optimal sol (Tortoise and Hare Algorithm || slow and fast pointer)


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
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL)
        {
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        return slow;
    }
};


