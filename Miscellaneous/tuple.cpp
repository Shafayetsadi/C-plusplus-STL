#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// Fixed size data structure
	tuple<string, int, string> t = make_tuple("abc", 10, "gfg");
	cout << get<0>(t) << endl;
	cout << get<1>(t) << endl;
	cout << get<2>(t) << endl;

	get<0>(t) = "pqr";
	cout << get<0>(t) << endl;

	cout << tuple_size<decltype(t)> :: value << endl;
	cout << tuple_size<tuple<string, int, string>> :: value << endl;

	string s1, s2;
	int n;
	tie(s1, n, s2) = t;
	// tie(s1, ignore, s2) = t;
	cout << s1 << " " << n << " " << s2 << endl;

	// t3 = tuple_cat(t1, t2);

	return 0;
}	