#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	string s, l;
	cin >> s;
	
	sort(s.begin(), s.end());
	cout << s;
	for (int i = s.length() - 1; i >= 0; i--)
	{
		l += s[i];
	}
	cout << "	" << l;
	
	return 0;
}
