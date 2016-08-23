#include <bits/stdc++.h>

using namespace std;
int main ()
{
	vector<int> v;
	
	int n;
	int val;
	
	while(1)
	{
		cin >> n;
		if (!n) return 0;
		
		v.assign(n,0);
		
		for(int i = 0 ; i < n ;i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> val;
				v[j]+=val;
			}
		}
		cout << *max_element(v.begin(), v.end()) << '\n';
		v.clear();
	}
}
