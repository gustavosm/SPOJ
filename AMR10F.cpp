#include <bits/stdc++.h>


using namespace std;


int pa(int a1, int r, int n)
{
	int an = a1 + (n - 1) * r;
	
	return ((a1 + an) * n) / 2;
}

int main()
{
	int cases;
	int n, d, a;
	ios_base :: sync_with_stdio(0); cin.tie(0);
	
	cin >> cases;
	
	while (cases--)
	{
		cin >> n >> a >> d;
		
		cout << pa(a, d, n) << '\n';
	}
}
