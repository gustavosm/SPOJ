#include <bits/stdc++.h>

using namespace std;

int main ()
{
	int n;
	static int teste = 1;
	while(cin >> n)
	{
		if (!n) return 0;
		cout << "Teste " << teste << '\n';
		cout << (long long)(pow(2,n) - 1) << "\n\n";
		teste++;
	}	
	return 0;
}
