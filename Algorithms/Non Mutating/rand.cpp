#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// This is C style random funtion
	// rand() returns a random integer value between 0 to RAND_MAX
	// Linear Congruential Generator
	// Xsub(n+1) = (aXn + b)%m

	// srand(unsigned int) sets different seed
	srand(time(NULL));

	int n = 10;
	while(n--){
		cout << rand() << " ";
	}cout << endl;

	n = 10;
	while(n--){
		// Generates from 0 to 99
		cout << rand()%100 << " ";
	} cout << endl;

	// random numbers in a range
	n = 10;
	int low = 10;
	int high = 100;
	int range = high - low + 1;
	while(n--){
		cout << ((rand()%range) + low) << " ";
	}cout << endl;
	return 0;
}	