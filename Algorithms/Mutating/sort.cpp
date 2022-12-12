#include <bits/stdc++.h>
using namespace std;

struct Point{
	int x, y;
};

bool myCmp(Point p1, Point p2){
	return (p1.x < p2.x);
}
bool cmp(pair<int, int> a, pair<int, int> b){
	if(a.first != b.first){
		return a.first > b.first;
	}
	else{
		return a.second > b.second;
	}
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	// Time Complexity: big O(nlog(n))
	// Uses IntroSort(hybrid of quicksort, heapsort and insetion sort)

	int arr[] = {10, 20, 5, 7};

	sort(arr, arr+4); // smaller to greater

	for(auto x : arr){
		cout << x << " ";
	}cout << endl;

	sort(arr, arr+4, greater<int>()); // reverse- greater to smaller

	for(auto x : arr){
		cout << x << " ";
	}cout << endl;	

	cout << endl;

    // User defined datatypes
	Point p[] = {{3, 10}, {2, 8}, {5, 4}, {4, 15}, {4, 11}};
	sort(p, p+5, myCmp); // myCmp is a user defined comparator function

	for(auto i : p){
		cout << i.x << " " << i.y << endl;
	}

	cout << endl << "Hola" << endl << endl;

	vector<pair<int, int>> vp = {{3, 10}, {2, 8}, {5, 4}, {4, 11}, {4, 15}};
	
	// Using lambda function
	sort(vp.begin(), vp.end(), 
		[](pair<int, int> x, pair<int, int> y){return (x.first > y.first);});


	for(auto i : vp){
		cout << i.first << " " << i.second << endl;
	}

	cout << endl;

	sort(vp.begin(), vp.end(), cmp);

	for(auto i : vp){
		cout << i.first << " " << i.second << endl;
	}

	return 0;
}	