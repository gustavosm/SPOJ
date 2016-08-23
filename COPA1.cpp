#include <bits/stdc++.h>

#define pb push_back
using namespace std;
int main ()
{
	int p1;
	int p2;
	char oitavas[] = "ABCDEFGHIJKLMNOP";
	string quartas;
	string semi;
	string fim;
	
	for (int i = 0; i < 16; i+= 2)
	{
		cin >> p1 >> p2;
		if (p1 > p2) quartas.pb(oitavas[i]);
		else quartas.pb(oitavas[i+1]);
	}
	
	for (int i = 0; i < 8; i+= 2)
	{
		cin >> p1 >> p2;
		if (p1 > p2) semi.pb(quartas[i]);
		else semi.pb(quartas[i+1]);
	}
	for (int i = 0; i < 4; i+= 2)
	{
		cin >> p1 >> p2;
		if (p1 > p2) fim.pb(semi[i]);
		else fim.pb(semi[i+1]);
	}
	cin >> p1 >> p2;
	if (p1 > p2) cout << fim[0] << '\n';
	else cout << fim[1] << '\n';
}
