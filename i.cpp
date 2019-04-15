#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n = 0;
	
	vector<int> v;
	cin >> n; 
	int j = 0;

	for(int i = 0 ; i < n; i++)
	{
		cin >> j;
		v.push_back(j);
	}

	//sort(v.begin(), v.end());
	int count[10];
		for (int i = 0; i < 10; i++)
	{
		count[i] = 0;
	}
	
	
	for(int i = 0; i < n; i++)
	{
		if(v[i] == 1 || v[i] == 2 || v[i] == 3 || v[i] == 4 || v[i] == 53 || v[i] == 54) count[1]++;
		if(v[i] == 5 || v[i] == 7 || v[i] == 6 || v[i] == 8 || v[i] == 51 || v[i] == 52) count[2] ++;
		if(v[i] == 9 || v[i] == 10 || v[i] == 11 || v[i] == 12 || v[i] == 49 || v[i] == 50) count[3] ++;
		if(v[i] == 13 || v[i] == 14 || v[i] == 15 || v[i] == 16 || v[i] == 47 || v[i] == 48) count[4] ++;
		if(v[i] == 17 || v[i] == 18 || v[i] == 19 || v[i] == 20 || v[i] == 45 || v[i] == 46) count[5] ++;
		if(v[i] == 21 || v[i] == 22 || v[i] == 23 || v[i] == 24 || v[i] == 43 || v[i] == 44) count[6] ++;
		if(v[i] == 25 || v[i] == 26 || v[i] == 27 || v[i] == 28 || v[i] == 41 || v[i] == 42) count[7] ++;
		if(v[i] == 29 || v[i] == 30 || v[i] == 31 || v[i] == 32 || v[i] == 39 || v[i] == 40) count[8] ++;
		if(v[i] == 33 || v[i] == 35 || v[i] == 34 || v[i] == 36 || v[i] == 37 || v[i] == 38) count[9] ++;
	}
 //for(int i = 1; i < 10; i++)
	//{
	//cout << count[i] << " ";
	//}

	int mem, memory;
	memory = 0; mem = 0;
	count[0] = 0;
	for (int i = 1; i < 10; i++)
	{
		if ( count [i] < 6) {
			if (mem > memory) memory = mem;else;
			mem = 0;
	//		cout << memory << " ";
		} else mem ++;
	}
	
	if (mem > memory) memory = mem;
	
	cout << memory;
	
	return 0;
}
