/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */;
 brute hashing :

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*,int> mpp;
        ListNode* temp = head;

        while(temp != NULL)
        {
            if(mpp[temp] != 0) return temp;
            mpp[temp]++;
            temp = temp -> next;
        }
        return NULL;
    }
};

optimal Solution : fast and slow pointer ;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {

        ListNode* fast = head;
        ListNode* slow = head;


        while(fast != NULL && fast -> next != NULL) 
        {
            slow = slow -> next;
            fast = fast->next->next;

            //if they collied means there is loop 
            if(slow == fast) {
                slow = head; //again initializing with head

                while(slow != fast)
                {
                    slow = slow -> next;
                    fast = fast -> next;
                }
                return slow;  //again slow == fast means we got our ans the starting point of loop
            }
        }

        
        return NULL;  //means there is no loop
    }
};
