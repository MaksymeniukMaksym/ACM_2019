#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	vector<int> s;
	int n, a;
	
	cin >> n;
	
	int x, c, v, b;
	
	x = n%10;
	c = (n%100 - x)/10;
	v = (n%1000 - c*10 - x )/100;
	b = (n%10000 - v*100 - c*10 - x)/1000; 
	
	s.push_back(x); s.push_back(c); s.push_back(v); s.push_back(b);
	
	sort(s.begin(), s.end());
	
	cout << s[0] * 1000 + s[1] * 100 + s[2] * 10 + s[3] << " ";
	cout << s[3] * 1000 + s[2] * 100 + s[1] * 10 + s[0];
	
	return 0;
}
