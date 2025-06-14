#include <iostream>
using namespace std;

void findMinMax(int arr[], int n, int &minVal, int &maxVal) {
    minVal = arr[0];
    maxVal = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < minVal)
            minVal = arr[i];
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }
}

int main() {
    int arr[] = {12, 3, 19, 5, 7, 21};
    int n = sizeof(arr) / sizeof(arr[0]);

    int minVal, maxVal;
    findMinMax(arr, n, minVal, maxVal);

    cout << "Minimum element: " << minVal << endl;
    cout << "Maximum element: " << maxVal << endl;

    return 0;
}

