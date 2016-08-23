#include <bits/stdc++.h>

using namespace std;
int main ()
{
	vector<pair<int, int> > v;
	vector<pair<int, int> > v3;
	vector<pair<int, int> > v4;
	vector<pair<int, int> > v2;
		
	string s;
	string s2;
	
	int n;
	int valor1;
	int valor2;
	int teste = 1;
	int k;
	
	char c;
	
	while(1)
	{
		cin >> n;
		if (!n) return 0;
		for (int i = 0 ; i < 5; i++)
		{
			cin >> valor1 >> valor2;
			v.push_back(pair<int,int> (valor1,valor2));
		}
		getchar();
		getline(cin, s);
		for (int i = 0 ; i < s.size(); i++)
			if (s[i] == ' ') 
				continue;
			else
				v3.push_back(v[s[i] - 'A']);
		n--;
		while(n--)
		{
			for (int i = 0 ; i < 5; i++)
			{
				cin >> valor1 >> valor2;
				v2.push_back(pair<int,int> (valor1,valor2));
			}
			getchar();
			getline(cin, s2);
			for (int i = 0 ; i < s2.size(); i++)
				if (s2[i] == ' ') 
					continue;
				else
					v4.push_back(v2[s2[i] - 'A']);
			for (int i = 0 ; i < 6; i++)
			{
				if (v3[i].first != v4[i].first && v3[i].first != v4[i].second)
					v3[i].first = -1;
				if (v3[i].second != v4[i].second && v3[i].second != v4[i].first)
					v3[i].second = -1;
			}
			v2.clear();
			v4.clear();
		}
		
		cout << "Teste " << teste << '\n';
		teste++;
		for (int i = 0 ; i < 6; i++)
		{
			if (v3[i].first != -1) cout << v3[i].first << ' ';
			else if (v3[i].second != -1) cout << v3[i].second << ' ';
		}
		cout << "\n\n";
		v.clear();
		v3.clear();
	}
}
