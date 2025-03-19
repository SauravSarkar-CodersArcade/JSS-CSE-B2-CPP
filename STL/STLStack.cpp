#include <bits/stdc++.h>
using namespace std;
void printStackElements(stack<int> s){
    while (!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }cout << endl;
}
int main() {
    // push, pop, size, empty, top
    // No display function
    stack<int> numbers;
    numbers.push(1);
    numbers.push(12);
    numbers.push(11);
    numbers.push(14);
    numbers.push(17);
    cout << numbers.top() << endl;
    printStackElements(numbers);
    return 0;
}
