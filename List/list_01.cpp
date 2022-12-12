/*
Time Complexity:
front(), back(), size(), begin(), end() --> big O(1)
push_front(), pop_front(), push_back, pop_back --> big O(1)
erase() --> big O(1)
reverse() --> big O(n)
sort() --> big O(nlog(n))
remove() --> big O(n)
unique() -- big O(n)
*/
#include <bits/stdc++.h>
using namespace std;

void printList(list<int> l){
	for(auto x : l){
		cout << x << " ";
	} cout << endl;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	// list is a doubly linked list
	list<int> l;
	l.push_back(10);
	l.push_back(20);
	l.push_front(5);
	l.push_back(30);
	l.push_back(40);
	printList(l);

	l.pop_front();
	l.pop_back();
	printList(l);

	// We can traverse using iterator

	auto it = l.begin();
	it++;
	// Inserts before iterator
	// Return iterator of inserted element
	it = l.insert(it, 15);
	printList(l);

	it = l.insert(it, 3, 7);
	printList(l);

	cout << l.front() << " " << l.back() << endl;
	cout << l.size() << endl;

	return 0;
}	