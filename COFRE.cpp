#include <bits/stdc++.h>x

using namespace std;
int main ()
{
	int n;
	int acc;
	int joao;
	int ze;
	int teste = 1;
	
	while(1)
	{
		cin >> n;
		if (!n) return 0;
		acc = 0;
		cout << "Teste " << teste << '\n';
		teste++;
		for (int i = 0 ; i < n ; i++)
		{
			cin >> joao >> ze;
			acc+= joao-ze;
			cout << acc << '\n';
		}
		cout << '\n';
		
	}
}
