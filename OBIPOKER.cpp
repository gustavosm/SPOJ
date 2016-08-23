#include <bits/stdc++.h>

using namespace std;
int ordenado(vector<int> v)
{
	for (int i = 0 ; i < v.size()-1; i++)
	{
		if (v[i] != v[i+1] - 1) return 0;
	}
	return 1;
}
int fourcard(vector<int> v)
{
	if (v[4] == v[1] || v[3] == v[0]) return v[2];
	return 0;
}
int threecard(vector<int> v)
{
	if (v[4] == v[2] && v[1] == v[0]) return v[4];
	if (v[4] == v[3] && v[2] == v[0]) return v[0];
	else return 0;
}
int threedif(vector<int> v)
{
	if (v[4] == v[2]) return v[3];
	if (v[3] == v[1]) return v[3];
	if (v[2] == v[0]) return v[0];
	return 0;
}
int twocard(vector<int> v)
{
	if (v[4] == v[3] && v[2] == v[1]) return 3*v[4] + 2*v[1] + 20;
	if (v[4] == v[3] && v[1] == v[0]) return 3*v[4] + 2*v[1] + 20;
	if (v[3] == v[2] && v[1] == v[0]) return 3*v[3] + 2*v[1] + 20;
	return 0;
}
int paircard(vector<int> v)
{
	if (v[4] == v[3]) return v[4];
	if (v[3] == v[2]) return v[2];
	if (v[2] == v[1]) return v[2];
	if (v[1] == v[0]) return v[1];
	return 0;
}
int main ()
{
	vector<int> v;
	int n;
	int x;
	int teste = 1;
	int cases;
	
	cin >> cases;
	while(cases--)
	{
		for (int i = 0 ; i < 5; i++)
		{
			cin >> x;
			v.push_back(x);
		}
		sort(v.begin(), v.end());
		cout << "Teste " << teste << '\n';
		teste++;
		if (ordenado(v)) cout << v[0]+200 << '\n';
		else if ((x = fourcard(v))) cout << x + 180 << '\n';
		else if ((x = threecard(v))) cout << x + 160 << '\n';
		else if ((x = threedif(v))) cout << x + 140 << '\n';
		else if ((x = twocard(v))) cout << x << '\n';
		else if ((x = paircard(v))) cout << x << '\n';
		else cout << "0\n";
		cout << '\n';
		v.clear();
	}
	
}

