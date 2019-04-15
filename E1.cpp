#include <iostream>
#include <vector>
#include <string>


using namespace std;

int main()
{
	int n, k, m, count = 0, d;
	vector<int> s, l;
	cin >> n >> k;
	
	for (int i = 2; i <= n; i++)
	{
		s.push_back(i);
	}



	while (s.size() > 0)
	{
		m = s[0];
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] % m == 0)
			{
				d = s[i];
				l.push_back(d);
				
				s.erase(s.begin() + i);
				//i--;
				count++;
			}
		
		}
	}
	
	
	cout << l[k - 1];

	
	
	return 0;
}
