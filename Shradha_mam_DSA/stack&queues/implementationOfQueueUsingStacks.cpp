class MyQueue {
public:
    stack<int> input;
    stack<int> output;
    int peekEle = -1;
    MyQueue() {
        
    }
    
    void push(int x) {
        if(input.empty()) {
            peekEle = x;
        }
        input.push(x);
    }
    
    int pop() {
        if(output.empty()) {
            //input -> output me bahro;  O(n)
            while(!input.empty()) {
                output.push(input.top());
                input.pop();
            }
        }
        int topEle = output.top();  //O(1)
        output.pop();
        return topEle;
    }
    
    int peek() {
        if(output.empty()) {
            return peekEle;  //O(1)
        }
        int val = output.top();  //O(1)
        return val;
    }
    
    bool empty() {
        return input.empty() && output.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */