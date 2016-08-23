#include <bits/stdc++.h>

using namespace std;
int main ()
{
	int menori;
	vector<int> menorj;
	int x;
	
	char ans[] = "YN";
	int n;
	int m;
	
	while(1)
	{
		cin >> n >> m;
		if (!n && !m) return 0;
		
		n--;
		cin >> menori;
		while(n--)
		{
			cin >> x;
			if (x < menori) menori = x;
		}
		
		
		while(m--)
		{
			cin >> x;
			menorj.push_back(x);
		}
		sort(menorj.begin(), menorj.end());
		cout << ans[menori >= menorj[1]] << '\n';
		menorj.clear();
	}
}
