#include <bits/stdc++.h>
using namespace std;

template<typename T>
T arrMax(T arr[], int n){
	T res = arr[0];
	for(int i=0; i<n; i++){
		if(arr[i] > res){
			res = arr[i];
		}
	}
	return res;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int arr1[] = {5, 76, 2, 345, 5};
	int n = 5;

	cout << arrMax<int>(arr1, n) << endl;

	float arr2[] = {5.7, 7.6, 2.9, 34.5, 5.1};
	cout << arrMax<float>(arr2, n) << endl;

	return 0;
}	