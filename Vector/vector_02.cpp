/*
Time Complexity:
front(), back(), empty(), begin(), end(), size() --> big O(1)

pop_back(), push_back() --> big O(1) normally
But in worst case --> big O(n)

insert(), erase, resize() --> big O(n)

*/
#include <bits/stdc++.h>
using namespace std;

void printVector(const vector<int> &v){
	for(auto x : v){
		cout << x << " ";
	} cout << endl;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	vector<int> v{5, 10, 15, 20, 25};
	printVector(v);

	vector<int> v_copy = v; // big O(n)
	printVector(v_copy);

	vector<int> &vr = v; // by reference

	v.pop_back();
	printVector(v);

	// front(), back() returns reference to first element
	// So we can modify values 
	cout << v.front() << endl;
	cout << v.back() << endl;

	// insert() funtion
	cout << "-----Insert-----" << endl;
	printVector(v);
	v.insert(v.begin(), 100);
	printVector(v);
	// Returns iterator of inserted elements position
	auto it = v.insert(v.begin(), 50);
	printVector(v);

	v.insert(v.begin(), 3, 1);
	printVector(v);

	vector<int> v2;
	v2.insert(v2.begin(), v.begin(), v.begin()+6);
	printVector(v2);

	// erase() funtion
	cout << "-----Erase-----" << endl;
	printVector(v);
	v.erase(v.begin());
	printVector(v);

	printVector(v2);
	v2.erase(v2.begin(), v2.end()-2);
	printVector(v2);

	v2.clear();
	cout << v2.size() << endl;
	cout << v2.empty() << endl;

	printVector(v);
	v.resize(4);
	printVector(v);
	v.resize(10);
	printVector(v);
	v.resize(14, 55);
	printVector(v);
	return 0;
}	