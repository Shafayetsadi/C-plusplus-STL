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
	
	// forward_list is a Singly Linked List
	forward_list<int> l = {10, 15, 20};
	printList(l);
	l.push_front(5);
	printList(l);
	l.push_front(3);
	printList(l);

	l.pop_front();
	printList(l);

	return 0;
}	