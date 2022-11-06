#include <iostream>
#include <stack>

using namespace std;

class Stack{
private:
    stack<int> s;

public:
    void push(int x){
        s.push(x);
    }
    void pop(){
        s.pop();
    }
    int top(){
        return s.top();
    }
    bool empty(){
        return s.empty();
    }

//Requires: stack or vector of ints
//
//Effects: Returns a stack resulting from the concatenation of 2 stacks
//
//@params: stack
//@returns: stack
//
//Testing Strategy
//
//Testing Partitions:
//*stack objects that are either empty or full
// 
    Stack operator+(Stack &b){
        Stack stk;
        
        while(!stk.empty()){
            stk.push(b.top());
            b.pop();
        }
        return stk;
    }
};

int main() {
    
    Stack a, b;
    
    a.push(1);
    a.push(2);
    b.push(3);
    b.push(4);
    
    Stack c = a + b;
    
    while(!c.empty()){
        cout << c.top() << endl;
        
        c.pop();
    }
    
    return 0;
}
