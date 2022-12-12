// Design a stack that supports getMin()
// we use  two stack. Main stack and Auxiliary stack
/*
push(x):
	ms.push(x);
	if(as.top() >= ms.top()){
		as.push(x);
	}
pop():
	if(as.top() == ms.top()){
		as.pop();
	}
	ms.pop();
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	cout << "Hello, World!\n";

	return 0;
}	