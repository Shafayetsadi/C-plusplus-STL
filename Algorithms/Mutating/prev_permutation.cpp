#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// Time Complexity is big O(n)
	vector<int> v{5, 4, 1, 2, 3};
	sort(v.begin(), v.end(), greater<int>());
	for(auto x : v){
			cout << x << " ";
		}cout << endl;
	while(prev_permutation(v.begin(), v.end())){
		for(auto x : v){
			cout << x << " ";
		}cout << endl;
	}
	return 0;
}	

/*
Time Complexity is big O(n).
Steps to find next_permutation():
1. Traverse from right, find the first element that is not
   in increasing order. Let this element be x
2. Find the largest element on right of x that is smaller than x.
   let this element be y
3. swap x and y
4. Reverse the subsequence after new position of y
*/