/*
Time Complexity:
insert_after(), erase_after(), assign() -> big O(1) for one item
	and big O(m) for m items
push_front(), pop_front() --> big O(1)
reverse() --> big O(n)
sort() --> big O(nlog(n))
remove() --> big O(n)
*/

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
	
	forward_list<int> l;
	l.assign({10, 20, 30, 40, 10});
	printList(l);

	l.remove(30);
	printList(l);

	l.remove(10); // Removes all instances
	for(auto it = l.begin(); it!=l.end(); it++){
		cout << (*it) << " ";
	} cout << endl;

	// Copying a list to another
	forward_list<int> l2;
	l2.assign(l.begin(), l.end());
	printList(l2);

	forward_list<int> l3;
	l3.assign(5, 10);
	printList(l3);

	return 0;
}	