#include <bits/stdc++.h>

using namespace std;
int main ()
{
	map <int, int> m;
	map <int, int> :: iterator it;
	
	int n;
	int val;
	int maior;
	int winner;
	
	cin >> n;
	
	while(n--)
	{
		cin >> val;
		m[val]++;
	}
	
	maior = -1;
	
	for (it = m.begin(); it != m.end(); it++)
	{
		if (it->second > maior)
		{
			maior = it->second;
			winner = it->first;
		}
	}
	cout << winner << '\n';
	m.clear();
}
