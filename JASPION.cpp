#include <bits/stdc++.h>

using namespace std;
int main ()
{
	map<string,string> m;

	string s;
	string s2;

	stringstream ss;
	
	int cases;
	
	int n;
	int mx;
	
	cin >> cases;
	getchar();
	
	while (cases--)
	{
		cin >> n >> mx;
		
		getchar();
		
		for (int i = 0 ; i < n ; i++)
		{
			getline(cin,s);
			getline(cin,s2);
			m[s] = s2;
		}
		for (int i = 0 ; i < mx; i++)
		{
			getline(cin, s);
			ss << s;
			while (ss >> s2)
			{
				if (!m[s2].empty()) cout << m[s2] << ' ';
				else cout << s2 << ' ';
			}
			cout << '\n';
			ss.clear();
		}
		cout << '\n';
		m.clear();
	}	
}
