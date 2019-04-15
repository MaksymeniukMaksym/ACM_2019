#include <iostream>
#include <vector>
#include <string>
#include <cmath>


using namespace std;

int main()
{
	vector<int> a;
	int l, r, count1 = 0, count2 = 0, num = 0;
	cin >> l >> r;
	
	for (int i = l; i <= r; i++)
	{
		for(int j = 1; j <= i; j++)
		{
			if(i % j == 0) count1++;
		}
		//count1++;
		cout << count1 << " ";
		if (count1 == 2) 
		{
			count1 = 0;
			continue;
		}
		for(int k = 1; k <= count1; k++)
		{
			if(count1 % k == 0) count2++;
		}
		//count2++;
		if (count2 == 2) num++;
		cout << count2 << " ";
		count2 = 0;
	}
	cout << num;
	
	return 0;
}
