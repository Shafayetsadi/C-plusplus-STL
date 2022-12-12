#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// Max Heap
	priority_queue<int> pq;
	pq.push(10); // big O(log(n))
	pq.push(15);
	pq.push(5);
	pq.push(20);

	cout << pq.size() << endl;
	cout << pq.top() << endl;

	while(!pq.empty()){
		cout << pq.top() << " ";
		pq.pop(); // big O(log(n))
	}cout << endl;

	// priority queue with minimum at the top
	priority_queue<int, vector<int>, greater<int>> mpq;
	mpq.push(10);
	mpq.push(15);
	mpq.push(5);
	mpq.push(20);

	cout << mpq.size() << endl;
	cout << mpq.top() << endl;

	while(!mpq.empty()){
		cout << mpq.top() << " ";
		mpq.pop();
	}cout << endl;

	int arr[] = {10, 5, 15}; 
	// This is better than pushing elements one by one.
	priority_queue<int> apq(arr, arr+3); // We can use vectors here too
	while(!apq.empty()){
		cout << apq.top() << " ";
		apq.pop();
	}cout << endl;

	return 0;
}	
/*
Application:
- Dikstra Algorithm
- Prim Algorithm
- Hiffman Algorithm
- Heap Sort
- And any other place where heap is used
*/