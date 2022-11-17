#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// See TIME Complexity of these operations at the end

	vector<int> v;
	// vector<int> v{10, 20, 30};
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);

	for(int i=0; i<v.size(); i++){
		cout << v[i] << " ";
		cout << v.at(i) << " ";
	} cout << endl;

	for(auto x : v){ // This is copy
		cout << x << " ";
	} cout << endl;

	for(auto &x : v){ // This is by reference
		cout << x << " ";
	} cout << endl;

	// Initialize all values with 24 in vector size of 5
	vector<int> vr(5, 24);

	// Here it is   vector<int> :: iterator
	for(auto it=vr.begin(); it != vr.end(); it++){
		cout << (*it) << " ";
	} cout << endl;

	int arr[] = {10, 15, 20};
	int n = sizeof(arr)/sizeof(arr[0]);
	vector<int> va(arr, arr+n);
	for(auto x : va){
		cout << x << " ";
	} cout << endl;

	// Reverse traversing
	for(auto it=va.rbegin(); it != va.rend(); it++){
		cout << (*it) << " ";
	} cout << endl;

	// Constant iterator
	// We can not change values
	for(auto it=va.cbegin(); it != va.cend(); it++){
		cout << (*it) << " ";
	} cout << endl;

	for(auto it=va.crbegin(); it != va.crend(); it++){
		cout << (*it) << " ";
	} cout << endl;
	return 0;
}	
/*
Time Complexity:
front(), back(), empty(), begin(), end(), size() --> big O(1)

pop_back(), push_back() --> big O(1) normally
But in worst case --> big O(n)

insert(), erase, resize() --> big O(n)

*/