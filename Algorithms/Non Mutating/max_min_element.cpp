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
	
	// Time complexity is big O(n)

	vector<int> v = {10, 5, 30, 40, 90, 8};

	auto it = max_element(v.begin(), v.end());
	cout << (*it) << endl;

	it = min_element(v.begin(), v.end());
	cout << (*it) << endl;

	cout << endl;



	// Declaring vector of Points
    vector<Point> vp = {{5, 4}, {2, 300}, {90, 10}};
    
    auto xit = max_element(vp.begin(), vp.end(), myCmp);
    
    // Print the point with Max X-coordinate
    cout << (*xit).x << " " << (*xit).y << endl;
        
    xit = min_element(vp.begin(), vp.end(), myCmp);    
    
    // Print the point with min X-coordinate
    cout << xit -> x << " " << xit -> y << endl;

	return 0;
}	