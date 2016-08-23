#include <bits/stdc++.h>


using namespace std;
typedef long long ll;

ll dp[17][1 << 18];
ll qtde[17][1 << 18];
int n;
ll v[17];
ll mx;

ll calc(int ultimo, ll mask)
{
	if (mask == (1 << n) - 1)
	{
		qtde[ultimo][mask] = 1;
		return 2 * n + v[ultimo];
	}
	
	ll &ans = dp[ultimo][mask];
	
	if (ans == -1)
	{
		for (int i = 0 ; i < n ; ++i)
		{
			if (!(mask & (1 << i)))
			{
				ll ret = abs(v[ultimo] - v[i]) + calc(i, mask | (1 << i));
				if (ans < ret)
				{	
					qtde[ultimo][mask] = qtde[i][mask | (1 << i)];
					ans = ret;
				}
				else if (ans == ret) qtde[ultimo][mask] += qtde[i][mask | (1 << i)];
			}
		}
	}
	return ans;
}

int main()
{
	while (cin >> n)
	{
		if (!n) return 0;
		
		for (int i = 0 ; i < n ; ++i)
		{
			cin >> v[i];
			for (ll j = 0 ; j < (1 << n); ++j)
			{
				qtde[i][j] = 0;
				dp[i][j] = -1;
			}
		}
		mx = INT_MIN;
		ll ans = 0;
		for (int i = 0 ; i < n ; ++i)
		{
			ll ret = v[i] + calc(i, (1 << i));
			if (ret > mx)
			{
				mx = ret;
				ans = qtde[i][1 << i];
			}
			else if (ret == mx) ans += qtde[i][1 << i];
		}
		cout << mx << ' ' << ans << '\n';
	}

}
