#include <iostream>
#include <vector>
#include <string>


using namespace std;

int main()
{
	string s;
	
	cin >> s;
	char a;
	a = s[0];
	int n = 0;
	
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] < a) 
		{
			a = s[i];
			n = i;
		}
	}
	s.erase(s.begin() + n);
	for (int i = 0; i < s.length(); i++)
	{
		v[i] = s[i];
	}
	cout << s;
	
	return 0;
}
