/*
Maps uses Red Black Tree internally.
Time Complexity:

begin(), end(), size(), empty() are big O(1)

insert(), [], at(), find(), count(), lower_bound(), upper_bound(),
erase(value) are big O(log(n))

erase(iterator) is big O(1)
*/
#include <bits/stdc++.h>
using namespace std;

void printMap(map<int, int> &m){
	for(auto &pr : m){
		cout << pr.first << " " << pr.second << endl;
	}
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	map<int, int> m;
	// map<int, int, greater<int>> m; // keys in decreasing order
	m.insert(make_pair(4, 16));
	m[5] = 25;
	m.insert({1, 1});
	m.insert({2, 4});
	m.insert({3, 9});
	m.insert({3, 9}); // unique element
	m.insert({2, 40}); // it is ignored

	printMap(m);
	// m.clear();
	// m.erase(4);
	// m.erase(it);
	// m.erase(m.begin(), m.end());
	cout << m.size() << endl;
	cout << m.empty() << endl;
	cout << m[5] << endl;
	cout << m[6] << endl; // it inserts 6 with value 0
	m[6]++;
	cout << m[6] << endl;
	m.at(6) = 36; // it throws error if 6 doesn't exist
	cout << m[6] << endl;

	// we can use count too
	if(m.find(5) != m.end()){
		cout << "Found\n";
	}
	else{
		cout << "Not found\n";
	}

	auto it = m.lower_bound(3);
	if(it != m.end()){
		cout << (*it).first << " " << it->second << endl;
	}
	else{
		cout << "No equal or greater value\n";
	}
	it = m.upper_bound(3);
	if(it != m.end()){
		cout << (*it).first << " " << it->second << endl;
	}
	else{
		cout << "No greater value\n";
	}
	cout << endl;
	map<int, int, greater<int>> mp;
	mp.insert({1, 1});
	mp.insert({2, 4});
	mp.insert({3, 9});
	mp.insert({4, 16});
	mp.insert({5, 25});
	it = mp.lower_bound(3);
	if(it != mp.end()){
		cout << (*it).first << " " << it->second << endl;
	}
	else{
		cout << "No equal or greater value\n";
	}
	it = mp.upper_bound(3);
	if(it != mp.end()){
		cout << (*it).first << " " << it->second << endl;
	}
	else{
		cout << "No greater value\n";
	}


	return 0;
}	