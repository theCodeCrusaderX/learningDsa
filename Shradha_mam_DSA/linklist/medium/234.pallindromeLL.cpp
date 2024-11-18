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

brute approach using stack ds
here we are using O(n) extra space 

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        stack<ListNode*> st;  //stack ds which holds nodes

        while(temp != NULL)  
        {
            st.push(temp);
            temp = temp -> next;
        }

        temp = head;
        while(temp != NULL)
        {
            if(temp -> val != st.top() -> val) return false;  //checking condition
            temp = temp -> next;
            st.pop();
        }
        
        return true;
    }
};


// optimal approach

class Solution {
public:
    ListNode* revList(ListNode* head) {
        if (head == NULL) return NULL;
        ListNode* pnode = NULL;
        ListNode* cnode = head;
        ListNode* nnode = head;

        while (nnode != NULL) {
            nnode = nnode->next;
            cnode->next = pnode;
            pnode = cnode;
            cnode = nnode;
        }
        return pnode;
    }

    bool isPalindrome(ListNode* head) {
        if (head == NULL || head->next == NULL) return true;

        // Step 1: Find the middle of the linked list
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Step 2: Reverse the second half of the list
        ListNode* secondHalfStart = revList(slow);
        ListNode* firstHalfStart = head;

        // Step 3: Compare both halves
        ListNode* tempSecondHalf = secondHalfStart;
        while (tempSecondHalf != NULL) {
            if (firstHalfStart->val != tempSecondHalf->val) {
                revList(secondHalfStart);  // Restore list before returning
                return false;
            }
            firstHalfStart = firstHalfStart->next;
            tempSecondHalf = tempSecondHalf->next;
        }

        // Step 4: Restore the second half of the list
        revList(secondHalfStart);
        return true;
    }
};

