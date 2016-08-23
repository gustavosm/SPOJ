#include <iostream>

using namespace std;
int main ()
{
	int sorteado;
	int ingresso;
	int cases;
	static int teste = 1;
	while(1)
	{
		cin >> cases;
		if (!cases) return 0;
		for (int i = 1; i <= cases; i++)
		{
			cin >> ingresso;
			if (ingresso == i)
			{
				sorteado = i;
			}
		}
		cout << "Teste " << teste << '\n';
		cout << sorteado << "\n\n";
		teste++;
	}
}
