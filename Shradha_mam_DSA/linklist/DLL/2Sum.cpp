class Solution
{
public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        // code here
        Node *st = head;
        Node *end = head;
        
        vector<pair<int,int>> res;
        
        while(end -> next != NULL) {
            end = end -> next;
        }
        
        while(st->data < end->data) {
            int sum = st->data + end->data;
            
            if(sum == target) {
                res.push_back({st->data,end->data});
                st = st -> next;
                end = end -> prev;
            }else if(sum < target) {
                st = st -> next;
            }else {
                end = end -> prev;
            }
            
        }
        return res;
    }
};