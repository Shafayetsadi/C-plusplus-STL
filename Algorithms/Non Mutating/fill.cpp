#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// Time Complexity big O(n)
	// we can use array, string, vector, list etc

	vector<int> v{10, 20, 30, 40};
	for(auto x:v){
		cout << x << " ";
	}cout << endl;

	fill(v.begin(), v.end(), 5);

	for(auto x:v){
		cout << x << " ";
	}cout << endl;

	string str = "Hello, how are you?";
	fill(str.begin(), str.end(), 'A');
	cout << str << endl;
	return 0;
}	