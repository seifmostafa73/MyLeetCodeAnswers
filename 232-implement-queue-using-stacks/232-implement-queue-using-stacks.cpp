class MyQueue {
private: 
    std::stack<int> stack1; std::stack<int> stack2;
    int counter;
public:
    MyQueue() {
        counter =0;
    }
    
    void push(int x) {
        while(!stack2.empty())
        {
            stack1.push(stack2.top() );
            stack2.pop();
        }
        stack1.push(x);
    }
    
    int pop() {
        
        while(stack1.empty() == false)
        {
            stack2.push(stack1.top());
            stack1.pop();
        }
        int element = stack2.top();
        stack2.pop();
        cout<<element<<endl;
        return element;
    }
    
    int peek() {
        while(stack1.empty() == false)
        {
            stack2.push(stack1.top());
            stack1.pop();
        }
        int element = stack2.top();
        cout<<element<<endl;
        return element;
    }
    
    bool empty() {
       return ( stack2.empty() && stack1.empty() ); 
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