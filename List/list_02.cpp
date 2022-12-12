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
	
	list<int> l = {10, 20, 30, 40, 20, 40};
	printList(l);

	auto it = l.begin();

	it = l.erase(it);
	printList(l);

	l.remove(40);
	printList(l);

	list<int> l1 = {10, 20, 30};
	list<int> l2 = {5, 15, 25};

	l1.merge(l2);
	printList(l1);
	cout << l2.empty() << endl;

	list<int> l3 = {1, 2, 3, 3, 4, 1, 3, 5, 6, 4};
	printList(l3);

	// Removes conjugated values
	l3.unique();
	printList(l3);

	l3.sort();
	printList(l3);

	l3.reverse();
	printList(l3);

	return 0;
}	