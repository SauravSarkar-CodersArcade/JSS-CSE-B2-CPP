#include <iostream>
using namespace std;
int main() {
    // new -> allocation & delete -> de-allocation
    int n;
    cout << "Enter the size of the array:" << endl;
    cin >> n;
    // 1D Array
    int * arr = new int[n];
    cout << "Enter the array elements:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }cout << endl;
    delete[]arr;
    return 0;
}
