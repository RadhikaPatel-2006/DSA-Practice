#include <iostream>
using namespace std;
void findMinMax(int arr[], int n){
	int min = arr[0];
	int max = arr[0];
	for(int i = 1; i<n; i++){
		if (arr[i] < min)
		min = arr[i];
		if (arr[i] > max)
		max =arr[i];
	}
	cout <<"Minmum Element: " << min << endl;
	cout <<"Maxmum Element: " << max << endl;
}
int main(){
	int arr[] = {10, 5, 8, 20, 3, 15};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	findMinMax(arr, n);
	return 0;
}
