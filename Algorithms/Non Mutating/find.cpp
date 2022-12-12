#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// Time Complexity is big O(n)
	vector<int> v = {5, 10, 7, 10, 20};
	auto it = find(v.begin(), v.end(), 10);
	if(it == v.end()){
		cout << "Not found." << endl;
	}
	else{
		cout << "Found at: " << (it-v.begin()) << endl;
	}

	int arr[] = {5, 10, 12, 8, 7, 3};
	int *ptr = find(arr, arr+6, 7);
	if(ptr == (arr+6)){
		cout << "Not found\n";
	}
	else{
		cout << "Found at: " << (ptr-arr) << endl;
	}
	return 0;
}	