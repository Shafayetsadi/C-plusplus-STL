#include <bits/stdc++.h>
using namespace std;

struct Point
{    
    int x;
    int y;
    
    Point(int i, int j)
    {
        x = i;
        y = j;
    }
};

bool myCmp(Point p1, Point p2)
{
    return (p1.x < p2.x);  
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// binary_search requires a sorted array
	// it uses lower_bound funtion internally
	// Time Complexity
	// for Random Access Containers big O(log(n))
	// for others big O(n)

	vector<int> v = {10, 20, 30, 40, 50};
	int x = 50;
	cout << binary_search(v.begin(), v.end(), x) << endl;
	x = 45;
	cout << binary_search(v.begin(), v.end(), x) << endl;


	// Declaring vector of Points
    vector<Point> vp = {{5, 4}, {2, 300}, {90, 10}};

    sort(vp.begin(), vp.end(), myCmp);
    
    Point p(2, 100);

    auto it = binary_search(vp.begin(), vp.end(), p, myCmp);
    
    if(it){
    	cout << "Found\n";
    }    
    else{
    	cout << "Not found\n";
    }

    // Here is twist
    // myCmp just compares the first element
    Point p2(2, 99);

    it = binary_search(vp.begin(), vp.end(), p, myCmp);
    
    if(it){
    	cout << "Found\n";
    }    
    else{
    	cout << "Not found\n";
    }

	return 0;
}	