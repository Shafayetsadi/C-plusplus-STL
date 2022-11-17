/*
input: [3, 1, 2]
	   ['G', 'E', 'K']

output: ['E', 'K', 'G']
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n = 3;
	int arr1[] = {3, 1, 2};
	char arr2[] = {'G', 'E', 'K'};

	pair<int, char> array[n];
	for(int i=0; i<n; i++){
		array[i] = {arr1[i], arr2[i]};
	}

	sort(array, array+n);
	for(int i=0; i<n; i++){
		cout << array[i].second << " ";
	}

	return 0;
}	