iterative solution ::


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
        ListNode* cnode = head;
        ListNode* nnode = head;

        ListNode* pnode = NULL;

        while(nnode != NULL)
        {
            nnode = nnode -> next;
            cnode -> next = pnode;
            pnode = cnode;
            cnode = nnode;
        }

        head = pnode;
        return head;
    }
};


// recursive solution :: 

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
        if(head == NULL || head -> next == NULL) {
            return head;
        }

        ListNode* newNode = reverseList(head -> next);

        ListNode* front = head -> next;
        front -> next = head;
        head -> next = NULL;

        return newNode;

    }
};


