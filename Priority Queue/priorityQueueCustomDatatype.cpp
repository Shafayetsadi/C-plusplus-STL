#include <bits/stdc++.h>
using namespace std;

struct Person{
	int age;
	float height;
	Person(int a, float h){
		age = a;
		height = h;
	}
};

struct myCmp{
	bool operator()(Person const &p1, Person const &p2){
		p1.height < p2.height;
	}
};

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	priority_queue<Person, vector<Person>, myCmp> pq;

	return 0;
}	