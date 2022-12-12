// Next Greater Element(Position-wise closest and on right side)

#include <bits/stdc++.h>
using namespace std;

// Naive Solution
// Time Complexity is big O(n^2)
void printNextGreater(int arr[], int n){
	for(int i=0; i<n; i++){
		int j = i+1;
		for(j; j<n; j++){
			if(arr[j] > arr[i]){
				cout << arr[j] << " ";
				break;
			}
		}
		if(j==n){
			cout << -1 << " ";
		}
	}
}

// Efficient solution
// Time Complexity is big O(n)
// prints output in reverse order
void _printNextGreater(int arr[], int n){
	stack<int> s;
	s.push(arr[n-1]);
	cout << -1 << " ";
	for(int i=n-2; i>=0; i--){
		while(!s.empty() && s.top() <= arr[i]){
			s.pop();
		}
		int nextGet = (s.empty()) ? (-1):(s.top());
		cout << nextGet << " ";
		s.push(arr[i]);
	}
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int arr[] = {5, 15, 10, 8, 6, 12, 9, 18};
	int n = 8;
	for(auto x : arr){
		cout << x << " ";
	}cout << endl;

	printNextGreater(arr, n);
	cout << endl;
	cout << "Reverse:" << endl;
	_printNextGreater(arr, n);

	return 0;
}	