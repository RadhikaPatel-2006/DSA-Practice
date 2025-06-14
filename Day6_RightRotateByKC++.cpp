#include <iostream>
using namespace std;

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rightRotate(int arr[], int n, int k) {
    k = k % n;  // Handle cases when k > n

    // Step 1: Reverse last k elements
    reverse(arr, n - k, n - 1);

    // Step 2: Reverse first n-k elements
    reverse(arr, 0, n - k - 1);

    // Step 3: Reverse whole array
    reverse(arr, 0, n - 1);
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    cout << "Original array: ";
    printArray(arr, n);

    rightRotate(arr, n, k);

    cout << "Array after " << k << " right rotations: ";
    printArray(arr, n);

    return 0;
}

