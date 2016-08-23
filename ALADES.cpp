#include <bits/stdc++.h>

using namespace std;
int main ()
{
	int h1;
	int m1;
	int h2;
	int m2;
	
	while(1)
	{
		cin >> h1 >> m1 >> h2 >> m2;
		if (!h1 && !m1 && !h2 && !m2)
			return 0;
		if (m1 > m2) 
		{
			m2+=60;
			h2--;
		}
		if (h1 > h2) h2+=24;
		
		cout << (h2 - h1) * 60 + (m2 - m1) << '\n';
	}
}
