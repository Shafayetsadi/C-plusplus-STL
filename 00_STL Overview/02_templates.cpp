/*
Templates in C++:
- write once, use for life datatypes
- like macros, processed by compiler, But better than macrose as 
  type cheacking is performed

Two types:
- Function Templates: sort, linear_search, binary_search
- Class Templates: stack, queue, deque

Templates is the main concept behind STL
*/

#include <bits/stdc++.h>
using namespace std;

template<typename T>
T myMax(T x, T y){
	return (x > y) ? x : y;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	cout << myMax<int>(5, 7) << endl;
	cout << myMax<char>('z', 'a') << endl;
	
	return 0;
}	