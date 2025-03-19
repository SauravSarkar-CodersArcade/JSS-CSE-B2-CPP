#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    // This gives you a matrix of n rows
    int ** squareMatrix = new int * [n];
    // Now we need to fix the n columns
    for (int i = 0; i < n; ++i) {
        // Each row of n size (n cols)
        squareMatrix[i] = new int[n];
        for (int j = 0; j < n; ++j) {
            cin >> squareMatrix[i][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << squareMatrix[i][j] << " ";
        }cout << endl;
    }
    delete[] squareMatrix;
    return 0;
}
