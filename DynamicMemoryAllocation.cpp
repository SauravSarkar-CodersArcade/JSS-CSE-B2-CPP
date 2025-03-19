#include <iostream>
using namespace std;
namespace dev1 {
    int x = 20;
    void add(int a, int b) {
        cout << a+b;
    }
}
namespace dev2{
    int x = 30;
    void add(int a, int b) {
        cout << a + b << endl;
    }
}
int main() {
    cout << "JSS" << endl;
    // :: -> Scope Resolution Operator
    dev1::add(1,2);
    dev2::add(3,4);
    cout << dev1::x << endl;
    cout << dev2::x << endl;
    auto a = 10;
    auto y = 2.5F; // Iterator
    string str;
    cout << "Enter a string:" << endl;
    getline(cin, str);
    cout << str << endl;
    return 0;
}
