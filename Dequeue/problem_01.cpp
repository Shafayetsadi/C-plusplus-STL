/*
Design a data structure that supports following operations in O(1) time complexity.
- insertMin(x)
- insertMax(x)
- getMin()
- getMax()
- extractMin()
- extractMax()
*/
#include <bits/stdc++.h>
using namespace std;

deque<int> dq;

void insertMin(int x){ dq.push_front(x); }
void insertMax(int x){ dq.push_back(x); }
int getMin(){ return dq.front(); }
int getMax(){ return dq.back(); }
int extractMin(){
	int x = dq.front();
	dq.pop_front();
	return x;
}
int extractMax(){
	int x = dq.back();
	dq.pop_back();
	return x;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	insertMin(10);
	insertMax(15);
	insertMin(5);
	insertMax(20);

	cout << getMin() << endl;
	cout << getMax() << endl;
	cout << extractMin() << endl;
	cout << extractMax() << endl;

	return 0;
}	