#include <bits/stdc++.h>
using namespace std;

void printList(forward_list<int> l){
	for(auto x : l){
		cout << x << " ";
	} cout << endl;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	forward_list<int> l = {10, 20, 30, 40, 50};
	printList(l);

	// Returns iterator to the last inserted element
	auto it = l.insert_after(l.begin(), 5);
	printList(l);

	it = l.insert_after(it, {4, 3, 2});
	printList(l);

	it = l.emplace_after(it, 1);
	printList(l);

	// Returns iterator to the next element
	it = l.erase_after(it);
	printList(l);
	cout << (*it) << endl;

	it = l.erase_after(++l.begin(), it);
	printList(l);

	l.reverse();
	printList(l);

	l.sort();
	printList(l);

	cout << l.empty() << endl;
	l.clear();
	cout << l.empty() << endl;

	forward_list<int> l1 = {10, 20, 30};
	forward_list<int> l2 = {5, 15, 25};

	l1.merge(l2);
	printList(l1);
	cout << l2.empty() << endl;

	return 0;
}	