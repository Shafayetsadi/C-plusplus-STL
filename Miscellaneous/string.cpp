#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	string str = "geeksforgeeks";
	cout << str << endl;
	cout << str.length() << endl;
	str += "GFG";
	cout << str << endl;

	// sub string
	cout << str.substr(5) << endl;
	cout << str.substr(1, 4) << endl;

	// find returns index of first occurence
	cout << str.find("for") << endl;
	cout << str.find("geeks") << endl;
	cout << str.find("Sadi") << endl; // garbage
	int res = str.find("Sadi");
	if(res == string::npos){
		cout << "Not found\n";
	}
	else{
		cout << "Found at: " << res << endl;
	}

	string s1 = "abc";
	string s2 = "bcd";
	if(s1 == s2){
		cout << "same\n";
	}
	else if(s1 < s2){
		cout << "s1 smaller\n";
	}
	else{
		cout << "s1 is greater\n";
	}

	string name;
	cout << "Enter name: " << endl;
	// cin >> str; // single word input
	// getline(cin, str); // single line input
	// getline(cin, str, '$') // gets input untill $ 

	// we can traverse a string like array, vector
	for(int i=0; i<str.length(); i++){
		cout << str[i] << " ";
	}cout << endl;

	for(auto x : str){
		cout << x << " ";
	}cout << endl;

	for(auto it=str.begin(); it!=str.end(); it++){
		cout << (*it) << " ";
	}cout << endl;

	return 0;
}	