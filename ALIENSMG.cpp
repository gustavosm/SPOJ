#include <bits/stdc++.h>

using namespace std;
int main ()
{
	map<string,int> m;
	
	string s;
	int n;
	
	while(1)
	{
		cin >> n;
		if (!n) return 0;
		getchar();
		for (int i = 0 ; i < n; i++)
		{
			getline(cin, s);
			sort(s.begin(), s.end());
			m[s]++;
		}
		cout << m.size() << '\n';
		m.clear();
	}
}
