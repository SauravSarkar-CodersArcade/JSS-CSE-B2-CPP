#include <iostream>
using namespace std;
const int MAX_SIZE = 100;
class Stack {
private:
    int arr[MAX_SIZE];
    int top;
public:
    Stack(){
        top = -1; // Empty Stack by default
    }
    bool isFull(){
        return top == MAX_SIZE - 1;
    }
    bool isEmpty(){
        return top == -1;
    }
    void push(int element){
        if (isFull()){
            cout << "Stack Overflow..!!" << endl;
        }
        top++;
        arr[top] = element;
    }
    void pop(){
        if (isEmpty()){
            cout << "Stack Underflow..!!" << endl;
        } else{
            top--;
        }
    }
    int peek(){
        if (isEmpty()){
            cout << "Stack Underflow...!!!" << endl;
            return -1;
        } else{
            return arr[top];
        }
    }
    int size(){
        return top+1;
    }
};
int main() {
    Stack stack = Stack();
    Stack stack1;
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/ sizeof(arr[0]);
    for (int i = 0; i < size; ++i) {
        stack.push(arr[i]);
    }
    cout << "Top Element: " << stack.peek() << endl;
    stack.pop();
    cout << "Top Element: " << stack.peek() << endl;
    cout << "Size: " << stack.size() << endl;
    cout << stack.isEmpty();
    return 0;
}
