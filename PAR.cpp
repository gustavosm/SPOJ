#include <bits/stdc++.h>

using namespace std;
int main ()
{
	string s1;
	string s2;
	int jogos;
	int par;
	int impar;
	int result;
	static int teste = 1;
	
	while(1)
	{
		cin >> jogos;
		if (!jogos) return 0;
		getchar();
		getline(cin,s1);
		getline(cin,s2);
		result = 0;
		cout << "Teste " << teste << '\n';
		while(jogos--)
		{
			cin >> par >> impar;
			if ((par+impar)%2 == 0) cout << s1 << '\n';
			else cout << s2 << '\n';
		}
		teste++;
		cout << '\n';
	}
}
