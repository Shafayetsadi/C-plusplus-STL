#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// We can use count() in arrays, strings, lists, vectors etc
	// Time Complexity is big O(n)
	vector<int> v = {30, 20, 10, 5, 10, 10, 6};

	cout << count(v.begin(), v.end(), 10) << endl;
	cout << count(v.begin(), v.end(), 15) << endl;

	return 0;
}	