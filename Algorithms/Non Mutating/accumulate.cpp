#include <bits/stdc++.h>
using namespace std;

int myFun(int x, int y){
	return x*y;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// Time Complexity big O(n)
	
	vector<int> v{10, 20, 30};
	int initial_res = 10;

	cout << accumulate(v.begin(), v.end(), 0) << endl;
	cout << accumulate(v.begin(), v.end(), initial_res) << endl;

	initial_res = 100;
	// it subtracts all element from initial result
	cout << accumulate(v.begin(), v.end(), initial_res, minus<int>()) << endl;	

	// with user defined myFun
	cout <<accumulate(v.begin(), v.end(), 1, myFun) << endl;

	return 0;
}	