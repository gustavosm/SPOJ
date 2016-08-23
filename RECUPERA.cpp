#include <bits/stdc++.h>

#define pb push_back
using namespace std;
int main ()
{
	
	int n;
	int ans;
	static int instancia = 1;
	int read;
	int soma;
	
	while (cin >> n)
	{
		ans = -100000;
		soma = 0;
		for (int i =  1 ; i <= n  ; i++)
		{
			cin >> read;			
			if (ans == -100000 && soma == read)
				ans = read;
			soma+=read;
		}
		cout << "Instancia " << instancia++ << '\n';
		if (ans != -100000) cout << ans << "\n\n";
		else cout << "nao achei\n\n";
	}
	
}
