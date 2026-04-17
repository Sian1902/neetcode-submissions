#include<stack>
using namespace std;
class MinStack {
private:
    stack<int> minStack;
    stack<int> normStack;
public:
    MinStack() {  
    }
    
    void push(int val) {
        normStack.push(val);
        val = min(val, minStack.empty()?val:minStack.top());
        minStack.push(val);
    }
    
    void pop() {
        normStack.pop();
        minStack.pop();
    }
    
    int top() {
        return normStack.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};
