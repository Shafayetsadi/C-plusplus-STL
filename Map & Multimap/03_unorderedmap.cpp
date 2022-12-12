/*
Unordered Map uses Hashing internally.
Time Complexity:

begin(), end(), size(), empty() are big O(1)

insert(), [], at(), find(), count(), erase() are big O(1) on average

*/
#include <bits/stdc++.h>
using namespace std;

void printSet(unordered_map<int, int> s){
	for(auto x : s){
		cout << x.first << " " << x.second << endl;
	}cout << endl;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	unordered_map<int, int> m; // does not maintain any order
	m.insert({1, 1});
	m.insert({3, 9});
	m.insert({2, 4});
	m.insert({6, 36});
	m.insert({5, 25});
	m.insert({5, 35}); // unique element
	printSet(m);
	cout << m.size() << endl;

	auto it = m.find(5);
	// we can use count here too
	if(it != m.end()){
		cout << "Found\n";
		cout << it->first << " " << it->second << endl;
		m.erase(it);
	}
	else{
		cout << "Not found\n";
	}
	cout << m.size() << endl;

	m.erase(2);
	cout << m.size() << endl;
	// m.erase(m.begin(), m.end());
	m.clear();
	cout << m.size() << endl;



	return 0;
}	