#include <iostream>

using namespace std;
int main ()
{
	int n;
	int a;
	int somaa;
	int b;
	int somab;
	static int teste = 1;
	
	while(1)
	{
		cin >> n;
		if (!n) return 0;
		somaa = 0;
		somab = 0;
		while(n--)
		{
			cin >> a >> b;
			somaa+=a;
			somab+=b;
		}
		cout << "Teste " << teste << '\n';
		cout << (somaa > somab? "Aldo\n\n" : "Beto\n\n");
		teste++;
	}
}
