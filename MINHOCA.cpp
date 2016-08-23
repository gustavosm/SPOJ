#include <bits/stdc++.h>

using namespace std;
int main ()
{
	int n;
	int m;
	int fazendas[111][111];
	int somasi[111];
	int somasj[111];
	while (cin >> n >> m)
	{
		for (int j = 0 ; j < m; j++)
			somasj[j] = 0;
		for (int i = 0 ; i < n; i++)
		{
			somasi[i] = 0;
			for (int j = 0 ; j < m; j++)
			{
				cin >> fazendas[i][j];
				somasi[i]+=fazendas[i][j];
				somasj[j]+=fazendas[i][j];
			}
		}
		int maiori = *max_element(somasi, somasi+n);
		int maiorj = *max_element(somasj, somasj+m);
		cout << max(maiori, maiorj) << '\n';
	}
	return 0;
}
