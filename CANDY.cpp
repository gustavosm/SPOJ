#include <bits/stdc++.h>


using namespace std;


int main()
{
	int n;
	int s;
	int t[100005];
	int ans;
	int q;
	
	while (1)
	{
		cin >> n;
		if (n == -1) return 0;
		s = 0;
		for (int i = 0 ; i < n ; ++i)
		{
			cin >> t[i];
			
			s += t[i];
		}
		if (s % n) cout << -1 << '\n';
		else
		{
			q = s / n;
			ans = 0;			
			for (int i = 0 ; i < n; ++i)
			{
				if (q < t[i]) ans += t[i] - q;
			}
			cout << ans << '\n';
		}
	}
}
