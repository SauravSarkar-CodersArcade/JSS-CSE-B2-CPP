#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    // This gives you a matrix of n rows
    int ** nonSquareMatrix = new int * [n];
    // Now we need to fix the m columns
    for (int i = 0; i < n; ++i) {
        // Each row of m size (m cols)
        nonSquareMatrix[i] = new int[m];
        for (int j = 0; j < m; ++j) {
            cin >> nonSquareMatrix[i][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << nonSquareMatrix[i][j] << " ";
        }cout << endl;
    }
    delete[] nonSquareMatrix;
    return 0;
}
