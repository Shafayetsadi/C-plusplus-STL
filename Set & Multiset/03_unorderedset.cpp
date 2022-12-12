/*
Unordered Set uses Hashing internally.
Time Complexity:

begin(), end(), size(), empty() are big O(1)

insert(), find(), count(), erase() are big O(1) on average

*/
#include <bits/stdc++.h>
using namespace std;

void printSet(unordered_set<int> s){
	for(auto x : s){
		cout << x << " ";
	}cout << endl;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	unordered_set<int> s; // does not maintain any order
	s.insert(10);
	s.insert(5);
	s.insert(20);
	s.insert(15);
	s.insert(5); // unique element
	printSet(s);

	auto it = s.find(20);
	// we can use count here too
	if(it != s.end()){
		cout << *it << endl;
		s.erase(it);
	}
	else{
		cout << "Not found\n";
	}

	s.erase(5);
	cout << s.size() << endl;
	// s.erase(s.begin(), s.end());
	s.clear();
	cout << s.size() << endl;



	return 0;
}	