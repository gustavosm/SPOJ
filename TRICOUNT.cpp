#include <bits/stdc++.h>


#define MAXN 1000005

using namespace std;


typedef long long unsigned ll;


int main()
{
	int cases;
	
	cin >> cases;
	
	ll n;
	while (cases--)
	{
		cin >> n;
		
		cout << (ll)(((n * (n + 2) * (2 * n + 1)) - n % 2) / 8) << '\n';
	}
}

