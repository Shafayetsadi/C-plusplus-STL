#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	// We can use pairs in array, vectors, maps etc
	vector<pair<int, string>> vp;
	pair<string, int> p;
	p = make_pair("Hello", 100);
	cout << p.first << " " << p.second << endl;
	
	p = {"Sadi", 20}; // Use this
	cout << p.first << " " << p.second << endl;

	pair<int, int> p1(10, 20);
	cout << p1.first << " " << p1.second << endl;

	pair<string, int> p2("Shafayet", 20);
	cout << p2.first << " " << p2.second << endl;

	// Comparisons of pairs
	pair<int, int> p3(1, 12), p4(9, 12);
	cout << (p3==p4) << endl;
	cout << (p3!=p4) << endl;
	cout << (p3>p4) << endl; // Compares only the first value
	cout << (p3<p4) << endl; // Compares only the first value
	return 0;
}	