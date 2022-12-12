// Previous Greater Element
#include <bits/stdc++.h>
using namespace std;

// Naive Solution
// Time Complexity is big O(n^2)
void printPrevGreater(int arr[], int n){
	cout << -1 << " ";
	for(int i=1; i<n; i++){
		// if(arr[i-1]>arr[i]){
		// 	cout << arr[i-1] << " ";
		// 	continue;
		// }
		// else{
		// 	bool flag = false;
		// 	for(int j=i-2; j>=0; j--){
		// 		if(arr[j] > arr[i]){
		// 			cout << arr[j] << " ";
		// 			flag = true;
		// 			break;
		// 		}
		// 	}
		// 	if(!flag){
		// 		cout << -1 << " ";
		// 	}
		// }
		int j;
		for(j=i-1; j>=0; j--){
			if(arr[j] > arr[i]){
				cout << arr[j] << " ";
				break;
			}
		}
		if(j==-1){
			cout << -1 << " ";
		}

	}
}

// Efficient Solution
// Time Complexity is big O(n)
void _printPrevGreater(int arr[], int n){
	stack<int> s;
	s.push(arr[0]);
	for(int i=0; i<n; i++){
		while(!s.empty() && s.top() <= arr[i]){
			s.pop();
		}
		int span;
		if(s.empty()){
			span = -1;
		}
		else{
			span = s.top();
		}
		cout << span << " ";
		s.push(arr[i]);
	}
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int arr[] = {15, 10, 18, 12, 4, 6, 2, 8};
	int n = 8;
	for(auto x : arr){
		cout << x << " ";
	}cout << endl;
	printPrevGreater(arr, n);
	cout << endl;
	_printPrevGreater(arr, n);

	return 0;
}	