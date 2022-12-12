// Stock span for all n days
// arr[] = {15, 13, 12, 14, 16, 8, 6, 4, 10, 30}
// output:  1   1   1   3   5   1  1  1  4   10
#include <bits/stdc++.h>
using namespace std;

// Naive Solution
// Time Complexity is big O(n^2)
void printSpan(int arr[], int n){
	for(int i=0; i<n; i++){
		int span = 1;
		for(int j=i-1; j>=0; j--){
			if(arr[i]>arr[j] || arr[i] == arr[j]){
				span++;
			}
			else{
				break;
			}
		}
		cout << span << " ";
	}
}

// Efficient Solution
// Time Complexity is big O(n)
void _printSpan(int arr[], int n){
	stack<int> s;
	s.push(0);
	for(int i=0; i<n; i++){
		while(!s.empty() && arr[s.top()] <= arr[i]){
			s.pop();
		}
		int span;
		if(s.empty()){
			span = i+1;
		}
		else{
			span = i-s.top();
		}
		cout << span << " ";
		s.push(i);
	}
}


int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int arr[] = {15, 13, 12, 14, 16, 8, 6, 4, 10, 30};
	printSpan(arr, 10);
	cout << endl;
	_printSpan(arr, 10);
	cout << endl << "Hola" << endl;

	return 0;
}	