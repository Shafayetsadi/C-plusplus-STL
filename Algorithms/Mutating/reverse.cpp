#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// Time Complexity is big O(n)
	// we can use arrays, list, dequeue, strings, vectors
	vector<int> v{10, 20, 30};
	reverse(v.begin(), v.end());
	for(auto x : v){
		cout << x << " ";
	}cout << endl;

	string str = "Shafayet";
	reverse(str.begin(), str.end());
	cout << str << endl;
	return 0;
}	