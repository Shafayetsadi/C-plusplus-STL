#include <bits/stdc++.h>
using namespace std;

// We should use const so that vector doesn't modified
void printVector(const vector<int> &v){
	// We should always use pass by reference for efficiency
	for(auto &x : v){
		cout << x << " ";
	} cout << endl;
}

// We have to pass vector by reference
// Here the function creates a copy
void fun1(vector<int> v){
	v.push_back(10);
	v.push_back(20);
}

void fun2(vector<int> &v){
	v.push_back(10);
	v.push_back(20);
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	vector<int> v{1, 2, 3, 4, 5};
	printVector(v);
	fun1(v);
	printVector(v);
	
	fun2(v);
	printVector(v);

	return 0;
}	