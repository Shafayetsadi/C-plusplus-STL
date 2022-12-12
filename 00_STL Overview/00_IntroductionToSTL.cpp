/*
STL - Standard Template Library

Containers: 
- Simple: pair, vector, forward_list, list
- Container Adapters: stack, queue, priority_queue
- Associative: set, map, unordered_set, unordered_map

Algorithms:
- binary_search, find, reverse, max, min, sort, etc

[ .begin(), .end() ]

int arr[] = {10, 15, 8, 20};
sort(arr, arr+4);
binary_search(arr, arr+4, 8);
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int arr[] = {10, 15, 8, 20};
	sort(arr, arr+4);
	for(auto x:arr){
		cout << x << " ";
	}cout << endl;

	if(binary_search(arr, arr+4, 8)){
		cout << "Found!\n";
	}
	else{
		cout << "Not found!\n";
	}

	return 0;
}	