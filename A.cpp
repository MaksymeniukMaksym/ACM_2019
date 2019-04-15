#include <iostream>

using namespace std;

int main()
{
	int t, p, d1, d2, d3;
	cin >> t;
	double a[1001];
	
	for (int i = 0; i < t; i++)
	{
		cin >> p >> d1 >> d2 >> d3;
		a[i] = (double)((d1*5)+(d2*3) + d3)/p;
	}
	cout << fixed;
	cout.precision(2);
	for (int i = 0; i < t; i++)
	{
		cout << a[i] << "\n";
	}
	
	
	return 0;
}
