#include <bits/stdc++.h>

using namespace std;
int main ()
{
	int n;
	int flag = 0;
	cin >> n;
	
	for (int i = 2; i <= sqrt(n);i++)
	{
		if (n%i == 0)
		{
			cout << "nao\n";
			flag = 1;
			break;
		}
	}
	if (!flag) cout << "sim\n";
}


