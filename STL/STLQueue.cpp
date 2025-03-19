#include <bits/stdc++.h>
using namespace std;
void printQueueElements(queue<int> q){
    while (!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }cout << endl;
}
int main() {
    // push, pop, size, empty, front, back
    queue<int> numbers;
    numbers.push(1);
    numbers.push(12);
    numbers.push(21);
    numbers.push(11);
    numbers.push(19);
    cout << "Front element: " << numbers.front() << endl;
    cout << "Back element: " << numbers.back() << endl;
    printQueueElements(numbers);
    return 0;
}
