#include <bits/stdc++.h>


using namespace std;

typedef long long l;

int main()
{
	l n;
	int cases;
	cin >> cases;
	while (cases--)
	{
		cin >> n;
		
		if (n % 3) cout << 0 << '\n';
		else cout << n / 3 << '\n';
	}
}
