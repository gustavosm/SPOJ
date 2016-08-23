#include <bits/stdc++.h>

using namespace std;
int main ()
{
	map<int,int> m1;
	map<int,int> m2;
	map<int,int> :: iterator it;
	
	int cont1;
	int cont2;
	int n;
	int mx;
	int val;
	
	while(1)
	{
		cin >> n >> mx;
		if (!n && !mx) return 0;
		
		for (int i = 0 ; i < n; i++)
		{
			cin >> val;
			m1[val]++;
		}
		for (int i = 0 ; i < mx ;i++)
		{
			cin >> val;
			m2[val]++;
		}
		cont1 = 0;
		for (it = m1.begin(); it != m1.end(); it++)
		{
			if (!m2[it->first])
				cont1++;
		}
		cont2 = 0;
		for ( it = m2.begin(); it != m2.end(); it++)
		{
			if (!m1[it->first])
				cont2++;
		}
		
		
		cout << min(cont1,cont2) << '\n';
		
		m1.clear();
		m2.clear();
	}
	
}
