#include <iostream>
#include <vector>
#include <string>


using namespace std;

int main()
{
	string s, l;
	int num = 0;
	
	cin >> s >> l;
	for (int i = 1;(i <= s.length()) && (i <= l.length()); i++ )
	{
		if (s[s.length()-i] != l[l.length()-i]) break;
		num++;
	}
	cout << num;
	
	return 0;
}
