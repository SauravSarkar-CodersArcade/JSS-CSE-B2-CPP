#include <bits/stdc++.h>
using namespace std;
void printQueueElements(queue<int> q){
    while (!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }cout << endl;
}
queue<int> reverseQueue(queue<int>  & q){
    stack<int> s;
    while (!q.empty()){
        int element = q.front();
        q.pop();
        s.push(element);
    }
    while (!s.empty()){
        int element = s.top();
        s.pop();
        q.push(element);
    }
    return q;
}
int main() {
    // push, pop, size, empty, front, back
    queue<int> numbers;
    numbers.push(1);
    numbers.push(12);
    numbers.push(21);
    numbers.push(11);
    numbers.push(19);
    cout << "Original Queue Elements: ";
    printQueueElements(numbers);
    reverseQueue(numbers);
    cout << "Reversed Queue Elements: ";
    printQueueElements(numbers);
    return 0;
}
