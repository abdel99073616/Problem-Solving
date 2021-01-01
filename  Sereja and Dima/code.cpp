#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	int c, n[1000],s=0,d=0;
	cin >> c;
	for (int i = 0; i < c; i++)
		cin >> n[i];
	for (int i = 0,j=c-1;c!=0;c--)
	{
		s += max(n[i], n[j]);
		if (n[i] > n[j])
			i++;
		else
			j--;
		c--;
		if (c == 0)
			break;
		d += max(n[i], n[j]);
		if (n[i] > n[j])
			i++;
		else
			j--;
	}
	cout << s << " " << d;
	return 0;
}