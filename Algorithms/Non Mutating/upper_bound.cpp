#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// Returns an iterator having address of first element greater
	// than to given value in a given sorted range

	// Time Complexity
	// it uses binary search internally
	// for Random Access Containers big O(log(n))
	// for others big O(n)
	// for sets, maps use their upper_bound
	
	vector<int> v = {10, 20, 20, 20, 30, 40};
	auto it = upper_bound(v.begin(), v.end(), 20);
	cout << (*it) << endl;
	cout << (it-v.begin()) << endl;

	it = upper_bound(v.begin(), v.end(), 25);
	cout << (*it) << endl;
	cout << (it-v.begin()) << endl;

	it = upper_bound(v.begin(), v.end(), 50);
	cout << (*it) << " "; // garbage value
	cout << (it-v.begin()) << endl;
	
	if(it==v.end()){
		cout << "Not found" << endl;
	}

	// we can use upper_bound to find a value
	// it helps to find the last occurence 
	// if(it != v.end() && (*(it-1)) == x){
	// 	cout << "Found" << endl;
	// }

	// For arrays use
	// int *ptr = upper_bound(arr, arr+n, 20);

	return 0;
}	