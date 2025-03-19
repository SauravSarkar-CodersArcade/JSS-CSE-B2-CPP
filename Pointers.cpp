#include <iostream>
using namespace std;

int main() {
    int a = 10; // 1000
    cout << &a << endl;
    int * ptr = &a; // 1000
    cout << ptr << endl;
    cout << &ptr << endl;
    cout << *ptr << endl;
    int ** dPtr = &ptr;
    cout << dPtr << endl;
    cout << **dPtr << endl;
    cout << *(&a) << endl;
    return 0;
}
