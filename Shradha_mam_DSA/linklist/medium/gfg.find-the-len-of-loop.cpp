
we have use the hash this is a brute approach 

class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        // Code here
        int c = 0;
        Node* temp = head;
        map<Node*, int> mpp;
        
        while(temp != NULL)
        {
            if(mpp.find(temp) == mpp.end()) { //store key as temp and val as c
                c++;
                mpp[temp] += c;
            }else {
                int length = (c-mpp[temp])+1;  //calculation
                return length;
            }
            temp = temp -> next;
        }
        return 0;
    }
};

optimal approach fast and slow Pointer::

class Solution {
  public:
    
    int findLen(Node* slow, Node* fast)
    {
        int c = 1;
        slow = slow -> next;
        
        while(slow != fast)
        {
            c++;
            slow = slow -> next;
        }
        return c;
    }
  
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        Node* slow = head;
        Node* fast = head;
        
        while(fast != NULL && fast -> next != NULL)
        {
            slow = slow -> next;
            fast = fast -> next -> next;
            
            if(slow == fast) {  //loop is detected;
                return findLen(slow,fast);
            }
        }
        
        return 0;  //!loop 
        
    }