#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	multiset<int> ms;
	ms.insert(5);
	ms.insert(10);
	ms.insert(20);
	ms.insert(5); // it allows multiple occurences of elements
	ms.insert(15);
	ms.insert(25);
	ms.insert(10);
	ms.insert(15);

	cout << ms.count(5) << endl;

	for(auto x : ms){
		cout << x << " ";
	}cout << endl;

	ms.erase(5); // deletes all occurences of 5

	for(auto x : ms){
		cout << x << " ";
	}cout << endl;

	auto it = ms.lower_bound(15);
	cout << (*it) << endl;
	it = ms.upper_bound(15);
	cout << (*it) << endl;

	pair<multiset<int>::iterator, multiset<int>::iterator> res = ms.equal_range(15);
	// first gives the lower_bound and second gives the upper_bound
	cout << (*res.first) << " " << (*res.second) << endl;

	return 0;
}	