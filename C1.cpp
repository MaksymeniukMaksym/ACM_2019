#include <iostream>
#include <vector>
#include <string>
#include <cmath>


using namespace std;

int main()
{
	vector<int> a;
	int l, r, count1 = 0, num = 0;
	cin >> l >> r;
	
	for (int i = l; i <= r; i++)
	{
		for(int j = 1; j <= sqrt(i); j++)
		{
			if(i % j == 0) count1++;
		}
		count1++;
		if (count1 > 2) 
		{
			a.push_back(count1);
		}
		count1 = 0;
	}
	count1 = 0;
	for (int i = 0; i < a.size(); i++)
	{
		for(int j = 1; j <= sqrt(a[i]); j++)
		{
			if(a[i]% j == 0) count1++;
		}
		count1++;
		if (count1 < 3)
		{
			num++;
		}
		count1 = 0;
	}
	cout << num;
	
	return 0;
}
