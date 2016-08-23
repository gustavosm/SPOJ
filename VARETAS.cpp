#include  <bits/stdc++.h>

using namespace std;
int main ()
{
	int n;
	int w;
	int q;
	int acc = 0;
	int ans;
	while(1)
	{
		cin >> n;
		if (!n) return 0;
		
		acc = 0;
		ans = 0;
		
		for (int i = 0 ; i < n;  i++)
		{
			cin >> w >> q;
			acc+=q;
			ans+=acc/4;
			acc%=4;
			if (acc % 2 != 0) acc--;
		}
		cout << ans << '\n';		
	}
	
}
