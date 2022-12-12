#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// Types of Iterator is in my notebook

	vector<int> v = {10, 20, 30, 40, 50, 60};

	for(int i=0;i<v.size();i++){
		cout << v[i] << " ";
	}cout << endl;

	for(int x : v){
		cout << x << " ";
	}cout << endl;

	for(auto &x : v){
		cout << x << " ";
	}cout << endl;

	vector<int> ::iterator it = v.begin();
	// auto it = v.begin();
	cout << (*it) << endl;
	it++;
	cout << (*it) << endl;
	cout << *(it+1) << endl;
	it--;
	cout << (*it) << endl;

	cout << endl;

	for(it = v.begin(); it != v.end(); it++){
	cout << *it << " ";
	}cout << endl;

	// prev(), next(), advance()
	it = v.begin();
	cout << (*it) << endl;
	it = next(it);
	cout << (*it) << endl;
	it = next(it, 2);
	cout << (*it) << endl;
	it = prev(it);
	cout << (*it) << endl;
	it = prev(it, 2);
	cout << (*it) << endl;
	advance(it, 3);
	cout << (*it) << endl;

	cout << endl;

	vector<pair<int, int>> v_p ={{1, 1}, {2, 4}, {3, 9}, {4, 16}};
	vector<pair<int, int>> :: iterator _it;
	// auto it = v_p.begin();

	for(_it = v_p.begin(); _it != v_p.end(); _it++){
		// Two ways
		// (*it).first <=> (it->first)
		cout << (*_it).first << " " << (*_it).second << " ";
		cout << _it->first << " " << _it->second << endl;
	}
	for(auto x : v_p){
		cout << x.first << " " << x.second << endl;
	}
	cout << endl;

	// We can use auto in declaring iterator and we should

	return 0;
}	