#include <iostream>
#include <vector>
using namespace std;




template <typename T>
class Stack{
public:
    bool empty() const;
    void push(const T &item);
    T & top();
    void pop();

private:
    vector<T> stack;
};


//Requires: stack or vector of any datatype
//
//Effects: Returns a boolean specifying if it is empty (true) or non empty(false)
//
//@params: void
//@returns: bool
//
//Testing Strategy
//
//Testing Partitions:
//*stack objects that are either empty or full
//

template <typename T>
bool Stack<T>::empty() const {
    return stack.empty();
}


//Requires: an input of type T
//
//Effects: adds the input item to the end of the vector or stack
//
//@params: constant of type T
//@returns: void
//
//Testing Strategy
//
//Testing Partitions:
//*input of type T and one of different type
//

template <typename T>
void Stack<T>::push(const T &item){
    stack.push_back(item);
}


//Requires: stack or vector of any datatype
//
//Effects: Returns the element at the end or top of the stack
//
//@params: a stack or vector of generic type
//@returns: element of type T
//
//Testing Strategy
//
//Testing Partitions:
//*stack objects that are either empty or full
//

template <typename T>
T & Stack<T>::top() {
    return stack.back();
}


//Requires: stack or vector of any datatype
//
//Effects: removes the element at the top of the stack or vector
//
//@params: a stack or vector of generic type
//@returns: void
//
//Testing Strategy
//
//Testing Partitions:
//*stack objects that are either empty or full
//

template <typename T>
void Stack<T>::pop() {
    if(!empty()){
        stack.pop_back();
    }
}

int main() {
    Stack<int> stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);
    stk.push(5);

    //prints every element inside the vector
    while(!stk.empty()){
        cout<<stk.top() << endl;
        stk.pop();
    }

    return 0;
}
