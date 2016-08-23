#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main ()
{
	int n;
	int m;
	map<ll, int> ans;
	int ocr;
	ll val;
	
	cin >> n >> m;
	for (int i = 1 ; i <= n; i++)
	{
		cin >> val;
		if (!ans[val])
			ans[val] = i;
	}
	for (int i = 0; i < m; i++)
	{
		cin >> val;
		
		if (!ans[val]) cout << "-1\n";
		else cout << ans[val] - 1<< '\n';
	}
}
