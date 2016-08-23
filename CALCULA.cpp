#include <bits/stdc++.h>

using namespace std;

int nextnum(string x, int *ans)
{
	int i = 0;
	*ans = 0;
	while (i < x.size() && isdigit(x[i]))
	{
		(*ans)*=10;
		(*ans)+=x[i] - '0';
		i++;		
	}
	return i;
}
int main ()
{
	int n;
	string x;
	int ans;
	int aux;
	int teste = 1;
	while(1)
	{
		cin >> n;
		if (!n) return 0;
		getchar();
		getline(cin, x);
		int i = nextnum(x, &ans);
		for (i = i; i < x.size(); i++)
		{
			aux = 0;
			char c = x[i];
			i++;
			while (i < x.size() && isdigit(x[i]))
			{
				aux*=10;
				aux+=x[i] - '0';
				i++;		
			}
			i--;
			if (c == '+') ans+=aux;
			else ans-=aux;
		}
		cout << "Teste " << teste << '\n';
		teste++;
		cout << ans << "\n\n";		
		
	}
}
