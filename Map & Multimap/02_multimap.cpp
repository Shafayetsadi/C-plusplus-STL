#include <bits/stdc++.h>
using namespace std;

void printMap(multimap<int, int> &m){
	for(auto &pr : m){
		cout << pr.first << " " << pr.second << endl;
	}
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	multimap<int, int> m;
	m.insert({1, 1});
	m.insert({2, 4});
	m.insert({3, 9});
	m.insert({5, 25});
	m.insert({4, 16}); 
	m.insert({4, 16}); // it allows multiple occurences of elements
	m.insert({4, 8});
	printMap(m);

	cout << "4 occurs: " << m.count(4) << endl;

	m.erase(4); // deletes all occurences of 5
	printMap(m);
	m.insert({4, 8});
	m.insert({4, 16});

	cout << endl;
	auto it = m.lower_bound(4);
	cout << it->first << " " << it->second << endl;
	it = m.upper_bound(4);
	cout << it->first << " " << it->second << endl;

	pair<multimap<int, int>::iterator, multimap<int, int>::iterator> res = m.equal_range(4);
	// first gives the lower_bound and second gives the upper_bound
	cout << (res.first)->first << " " << (res.first)->second << endl;
	cout << (res.second)->first << " " << (res.second)->second << endl;

	return 0;
}	