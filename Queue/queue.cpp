/*
Queue - FIFO - first in first out
- size
- front
- back
- push
- pop
- empty
Time Complexity is big O(1)
It is also a container adapter like stack.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout << q.front() << " " << q.back() << endl;

    q.pop();
    cout << q.front() << " " << q.back() << endl;

    q.push(40);
    while(!q.empty()){
    	cout << q.front() << " ";
    	q.pop();
    }

	return 0;
}	