/*
Time Complexity:
front(), back(), size(), begin(), end() --> big O(1)
push_front(), pop_front(), push_back, pop_back --> big O(1)
erase() --> big O(n)
insert() --> big O(n)
*/
#include <bits/stdc++.h>
using namespace std;

void printDeque(deque<int> &dq){
	for(auto x : dq){
		cout << x << " ";
	} cout << endl;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	deque<int> dq = {10, 20, 30};
	printDeque(dq);

	dq.push_front(5);
	dq.push_back(40);
	printDeque(dq);

	cout << dq.front() << " " << dq.back() << endl;

	cout << endl;

	auto it = dq.begin();
	it++;
	dq.insert(it, 7);
	printDeque(dq);

	dq.pop_front();
	dq.pop_back();
	printDeque(dq);

	cout << dq.size() << endl;

	return 0;
}	