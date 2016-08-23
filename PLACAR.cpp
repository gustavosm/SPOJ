#include <bits/stdc++.h>

using namespace std;
int main ()
{
	map<int, vector<string> > m;
	
	int n;
	string nome;
	int pto;
	int teste = 1;
	
	while(cin >> n)
	{
		cout << "Instancia " << teste << '\n';
		teste++;
		
		getchar();
		while(n--)
		{
			cin >> nome >> pto;
			m[pto].push_back(nome);
		}
		map<int, vector<string > > :: iterator it;
		it = m.begin();
		sort((it->second).begin(), (it->second).end());
		cout << (it->second)[(it->second).size() - 1] << '\n';
		m.clear();
	}
}
