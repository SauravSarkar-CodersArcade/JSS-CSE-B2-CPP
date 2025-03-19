#include <iostream>
using namespace std;
int KadaneAlgo(int arr[], int size){
    int cmax = arr[0];
    int gmax = arr[0];
    for (int i = 1; i < size; ++i) {
        cmax = max(arr[i], cmax + arr[i]);
        gmax = max(cmax, gmax);
    }
    return gmax;
}
int main() {
    int arr[] = {5,-8,1,2,-1,4};
    int size = sizeof(arr)/ sizeof(arr[0]);
    int maxSum = KadaneAlgo(arr, size);
    cout << maxSum << endl;
    cout << INT_MAX + 1 << endl;
    cout << INT_MIN - 1  << endl;
    return 0;
}
