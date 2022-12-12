// Reverse items using stack
#include <bits/stdc++.h>
using namespace std;

void reverseItems(string &str){
	stack<char> s;
	for(int i=0; i<str.length(); i++){
		s.push(str[i]);
	}
	for(int i=0; i<str.length(); i++){
		str[i] = s.top();
		s.pop();
	}
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string str = "shafayet";
	cout << str << endl;
	reverseItems(str);
	cout << str << endl;

	reverse(str.begin(), str.end());
	cout << str << endl;

	return 0;
}	