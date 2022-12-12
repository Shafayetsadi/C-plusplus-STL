#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// A GCC compiler specific funtion to count set bits
	// it uses unsigned integer number

	int n = 5;
	cout << __builtin_popcount(n) << endl;

	n = 8;
	cout << __builtin_popcount(n) << endl;

	n = 7;
	cout << __builtin_popcount(n) << endl;

	// __builtin_popcountl() for long integer
	// __builtin_popcountll() for long long integer

	return 0;
}	