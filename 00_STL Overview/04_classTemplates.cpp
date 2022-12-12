#include <bits/stdc++.h>
using namespace std;

template<typename T>
struct Pair{
	T x, y;
	Pair(T i, T j){
		x = i;
		y = j;
	}
	T getFirst(){
		return x;
	}
	T getSecond(){
		return y;
	}
};

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	Pair<int> p1(10, 20);
	cout << p1.getFirst() << endl;
	cout << p1.getSecond() << endl;
	return 0;
}	