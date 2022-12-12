// Check balanced paranthesis
#include <bits/stdc++.h>
using namespace std;

bool isBalanced(string str){
	stack<char> s;
	for(int i=0; i<str.length(); i++){
		char ch = str[i];
		if(ch == '(' || ch == '{' || ch == '['){
			s.push(ch);
		}
		else{
			if(s.empty()){
				return false;
			}
			char last = s.top();
			s.pop();
			if(ch==')'){
				if(last!='('){
					return false;
				}
				else{
					continue;
				}
			}
			if(ch=='}'){
				if(last!='{'){
					return false;
				}
			}
			if(ch==']'){
				if(last!='['){
					return false;
				}
			}
		}
	}
	if(s.empty()){
		return true;
	}
	else{
		return false;
	}
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	string s = "[{(((())))}]";
	cout << s << endl;
	cout << isBalanced(s) << endl;

	return 0;
}	