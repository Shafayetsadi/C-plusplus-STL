#include <bits/stdc++.h>
using namespace std;

char findExtra(string s1, string s2){
	int n = s1.length();
	int res = 0;
	for(int i=0; i<n; i++){
		res = res ^ s1[i] ^ s2[i];
	}
	res = res ^ s2[n];
	return char(res);
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// We can sort both string ans compare them
	// the first not matching is the answer
	// Another way is by counting occurence from first string
	// ans subtractind from second string
	// we should declare an array size of 256 for all the ascii charracters
	// Now the bitwise operator way
	// a^b == 0
	// a^0 == a

	cout << findExtra("aabcbc", "aabbccx") << endl;


	cout << int('C') - 64 << endl;

	return 0;
}	