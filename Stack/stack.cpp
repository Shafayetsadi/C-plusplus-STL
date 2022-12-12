/*
stack = LIFO -last in fast out
- size
- top
- push
- pop
- empty
Time Complexity is big O(1)
it is a container adapter.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);

	cout << s.size() << endl;
	cout << s.top() << endl;

	s.pop();
	cout << s.top() << endl;

	s.push(30);
	while(!s.empty()){
		cout << s.top() << " ";
		s.pop();
	}

	return 0;
}	