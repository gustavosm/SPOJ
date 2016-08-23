#include <bits/stdc++.h>

using namespace std;
int main ()
{
	int v[100100];
	int n;
	int l;
	int x;
	int aux;
	int maior;
	int *upper;
	int *lower;
	
	while(1)
	{
		cin >> n >> l;
		if (!n && !l) return 0;
		
		for (int i = 0 ;i  < l ; i++)
		{
			cin >> v[i];
		}
		maior = 999999;
		for (int i = 0 ; i < l; i++)
		{
		
			lower = &v[i];
			upper = upper_bound(v, v + l, v[i] + n - 1);	
			if (upper < v + l)
			{
				if (n - (upper - lower) < maior)
					maior = n - (upper - lower);
			}
			else
			{
				if (v[l - 1] == v[i] + n - 1)
				{
					if (n - (l - i) < maior)
						maior = n - (l - i);
				}
			}
		}
		cout << maior << '\n';
	}
}
