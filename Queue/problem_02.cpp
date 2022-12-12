// Reverse first k items of a queue.
#include <bits/stdc++.h>
using namespace std;

void reverseK(queue<int> &q, int k){
	if(q.empty() || k>q.size() || k<=0){
		return;
	}
	stack<int> s;
	for(int i=0; i<k; i++){
		s.push(q.front());
		q.pop();
	}
	while(!s.empty()){
		q.push(s.top());
		s.pop();
	}
	for(int i=0; i<q.size()-k; i++){
		q.push(q.front());
		q.pop();
	}
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	queue<int> q;
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);

	int k = 3;

	reverseK(q, k);

	while(!q.empty()){
		cout << q.front() << " ";
		q.pop();
	}

	return 0;
}	