/*
Set uses Red Black Tree internally.
Time Complexity:

begin(), end(), size(), empty() are big O(1)

insert(), find(), count(), lower_bound(), upper_bound(),
erase(value) are big O(log(n))

erase(iterator) is big O(1)
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	set<int> s1; // sorted in increasing order
	s1.insert(10);
	s1.insert(5);
	s1.insert(20);
	s1.insert(5); // stores unique elements

	for(int x : s1){
		cout << x << " ";
	}cout << endl;

	for(auto it=s1.begin(); it != s1.end(); it++){
		cout << (*it) << " ";
	}cout << endl;


	set<int, greater<int>> s2; // sorted in decreasing order
	s2.insert(10);
	s2.insert(5);
	s2.insert(20);

	for(int x : s2){
		cout << x << " ";
	}cout << endl;

	// prints in reverse order
	for(auto it=s2.rbegin(); it != s2.rend(); it++){
		cout << (*it) << " ";
	}cout << endl;

	s2.clear();
	cout << s2.size() << endl;

	auto it = s1.find(2);
	if(it != s1.end()){
		cout << *it << endl;
	}
	else{
		cout << "Not found\n";
	}

	if(s1.count(10)){
		cout << "Found\n";
	}
	else{
		cout << "Not found\n";
	}

	cout << endl;

	it = s1.find(10);
	if(it != s1.end()){
		s1.erase(it);
	}

	for(auto x : s1){
		cout << x << " ";
	}cout << endl;

	s1.erase(20);
	s1.erase(2);

	for(auto x : s1){
		cout << x << " ";
	}cout << endl;

	s1.insert(10);
	s1.insert(15);
	s1.insert(20);

	for(auto x : s1){
		cout << x << " ";
	}cout << endl;

	it = s1.find(15);
	s1.erase(it, s1.end());

	for(auto x : s1){
		cout << x << " ";
	}cout << endl;

	s1.insert(15);
	s1.insert(20);
	s1.insert(25);
	cout << endl;

	it = s1.lower_bound(15);
	if(it != s1.end()){
		cout << (*it) << endl;
	}else{
		cout << "Given element is grater than the largest.\n";
	}
	it = s1.upper_bound(15);
	if(it != s1.end()){
		cout << (*it) << endl;
	}else{
		cout << "Given element is grater than the largest.\n";
	}

	return 0;
}	