// Generate numbers with given digits
// Given a number n, print first n numbers(in increasing order) such
// that all these rumber have digits in set {5, 6}
#include <bits/stdc++.h>
using namespace std;

// Time Complexity is big O(n)
void printFirstN(int n){
	queue<string> q;
	q.push("5");
	q.push("6");
	for(int i=0; i<n; i++){
		string curr = q.front();
		cout << curr << " ";
		q.pop();
		q.push(curr+"5");
		q.push(curr+"6");
	}
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	printFirstN(25);

	return 0;
}	