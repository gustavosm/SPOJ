#include <bits/stdc++.h>

using namespace std;

int main ()
{
	int m3;
	int total = 0;
	
	cin >> m3;
	
	if (m3 > 100) 
	{
		total+= (m3 - 100) * 5;
		m3 = 100;
	}
	if (m3 > 30) 
	{
		total+= (m3 - 30) * 2;
		m3 = 30;
	}
	if (m3 > 10) 
	{
		total+= (m3 - 10);
		m3 = 10;
	}
	if (m3 <= 10)
		total+=7;
	
	cout << total << '\n';
	
}
