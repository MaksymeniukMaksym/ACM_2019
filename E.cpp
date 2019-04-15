#include <iostream>
#include <vector>
#include <string>


using namespace std;

int main()
{
	int n, k, m;
	vector<int> s, l;
	cin >> n >> k;
	
	for (int i = 2; i <= n; i++)
	{
		s.push_back(i);
	}
	/*for(int i = 0; i < s.size(); i++)
	{

		for (int j = i; j < s.size(); j++)
		{
			if (s[j] % s[i] == 0)
			{
				m++;
			} else
			{
				l.push_back(s[j]);
			}
			cout << endl;
		for (int j = 0; j < s.size(); j++)
		{
			cout << s[j] << " ";
		}
			s.erase( s.begin(), s.end());
			copy (l.begin(), l.end() , s.begin());
		cout << endl;
		for (int j = 0; j < s.size(); j++)
		{
			cout << s[j] << " ";
		}
		}

	}*/
	cout << endl;
		for (int i = 0; i < s.size(); i++)
		{
			cout << l[i] << " ";
		}
	while (s.size() > 0)
	{
		m = s[0];
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] % m == 0)
			{
				l.push_back(s[i]);
				s.erase(s.begin() + i);
				i--;
			}
		}
	}
	for (int i = 0; i < s.size(); i++)
		{
			cout << l[i] << " ";
		}
	
	//cout << s[k - 1];

	
	
	return 0;
}
