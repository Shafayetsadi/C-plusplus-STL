#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	vector<int> v1 = {10, 20, 40};
	vector<int> v2 = {5, 15, 30};
	vector<int> v3(6);
	// It needs sorted arrays
	// Time complexity is big O(m+n)
	// It returns sorted merged array
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());

	for(auto x : v3){
		cout << x << " ";
	}cout << endl;

	return 0;
}	