#include <bits/stdc++.h>
using namespace std;

int matMed(int mat[][5], int r, int c){
	if(c==1){
		vector<int> v;
		for(int i=0;i<r;i++){
			v.push_back(mat[i][0]);
		}
		sort(v.begin(), v.end());
		int mid = r/2;
		return (v[mid]);
	}
	int min = mat[0][0];
	int max = mat[0][c-1];
	for(int i=1; i<r; i++){
		if(mat[i][0] < min){
			min = mat[i][0];
		}
		if(mat[i][c-1] < min){
			min = mat[i][c-1];
		}

		int medPos = (r*c+1)/2;
		while(min < max){
			int mid = (min+max)/2;
			int midPos = 0;
			cout << "mid: " << mid << endl;
			for(int i=0; i<r; i++){
				int pos = lower_bound(mat[i], mat[i]+c, mid) - mat[i];
				if(mat[i][pos] == mid) pos++;
				// cout << pos << " ";
				midPos += pos;
			}
			// cout << endl << "midPos: " << midPos << endl;
			if(midPos<medPos){
				min = mid+1;
			}
			else{
				max = mid;
			}
			// cout << "min max: " << min << " " << max << endl;
		}
	}
	return min;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// Assumptions:
	// Odd sized matrix
	// All distinct element
	// Efficient:  big O(r*log(max-min)*logc)
	int r, c;
	r = 3;
	c = 5;
	int mat[r][5] = {{5, 10, 20, 30, 40},
					  {1, 2, 3, 4, 6},
					  {11, 13, 15, 17, 19}};

	int m[][5]= { {1,3,5}, {2,6,9}, {3,6,9} };

	int mm[][5] = {{3}, {1816}, {369}, {333}, {1617}, {329}, {115},
					 {1923}, {1994}, {1486}, {1096}};

	// cout << matMed(mat, r, c) << endl;
	// cout << matMed(m, 3, 3) << endl;
	cout << "Hola" << endl;
	// for(auto x : mm){
	// 	cout << x[0] << endl;
	// }
	cout << matMed(mm, 11, 1) << endl;
	return 0;
}	