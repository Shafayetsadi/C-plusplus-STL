/*
Given an array and a number k, we need to find 
maximum element in every subarrays of size k.
*/
#include <bits/stdc++.h>
using namespace std;

// Time Complexity is big O(n*k)
void printkMax(int arr[], int n, int k){
	for(int i=0; i<=n-k; i++){
		int mx = arr[i];
		for(int j=i+1; j<i+k; j++){
			mx = max(mx, arr[j]);
		}
		cout << mx << " ";
	}
}

// More Efficient way
// Time Complexity is big O(n)
void _printkMax(int arr[], int n, int k){
	deque<int> dq;
	for(int i=0; i<k; i++){
		while(!dq.empty() && arr[i] >= arr[dq.back()]){
			dq.pop_back();
		}
		dq.push_back(i);
	}
	for(int i=k; i<n; i++){
		cout << arr[dq.front()] << " ";
		while(!dq.empty() && dq.front() <= i-k){
			dq.pop_front();
		}
		while(!dq.empty() && arr[i] >= arr[dq.back()]){
			dq.pop_back();
		}
		dq.push_back(i);
	}
	cout << arr[dq.front()] << " ";
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int arr[] = {10, 8, 5, 12, 15, 7, 6};
	int n = 7, k = 3;
	printkMax(arr, n, k);
	cout << endl;
	_printkMax(arr, n, k);
	return 0;
}	