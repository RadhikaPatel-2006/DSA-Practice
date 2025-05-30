#include <iostream>
#include <algorithm>
using namespace std;

int KthSmallest(int arr[], int n, int K){
	sort(arr, arr + n);
	return arr[K - 1];
	
}

int main()
{
	int arr[] = {7, 10, 4, 3, 20, 15,};
	int n = sizeof(arr) / sizeof(arr[0]);
	int K = 3;
	cout << "Kth Smallest Element is: " << KthSmallest(arr, n, K);
	return 0;
}
