#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	vector<int> v1{10, 20, 30, 5};
	vector<int> v2{20, 10, 5, 30};

	if(is_permutation(v1.begin(), v1.end(), v2.begin())){
		cout << "Yes\n";
	}
	else{
		cout << "No\n";
	}

	v1.push_back(20);
	v2.push_back(5);

	if(is_permutation(v1.begin(), v1.end(), v2.begin())){
		cout << "Yes\n";
	}
	else{
		cout << "No\n";
	}

	return 0;
}	