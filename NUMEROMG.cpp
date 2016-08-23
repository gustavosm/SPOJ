#include <bits/stdc++.h>

#define pb push_back
using namespace std;
void soma(string s1, string s2, string& ans)
{
	int result=0;
	int i;
	int j;
	int op1;
	int op2;
	for (i = s1.size() - 1, j = s2.size() - 1; i >= 0 && j >= 0 ; i--, j--)
	{
		if (isdigit(s1[i])) op1 = s1[i] - '0';
		else op1 = s1[i] - 'A' + 10;
		
		if (isdigit(s2[j])) op2 = s2[j] - '0';
		else op2 = s2[j] - 'A' + 10;
		
		result+= op1 + op2;
		
		if (result%36 < 10) ans.pb(result%36 + '0');
		else ans.pb(result%36 + 'A' - 10);
		
		result/=36;		
	}
	
	for (i = i; i >= 0; i--)
	{
		if (isdigit(s1[i])) op1 = s1[i] - '0';
		else op1 = s1[i] - 'A' + 10;
		
		result+= op1;
		
		if (result%36 < 10) ans.pb(result%36 + '0');
		else ans.pb(result%36 + 'A' - 10);
		
		result/=36;		
	}
	for (i = j; i >= 0; i--)
	{
		if (isdigit(s2[i])) op1 = s2[i] - '0';
		else op1 = s2[i] - 'A' + 10;
		
		result+= op1;
		
		if (result%36 < 10) ans.pb(result%36 + '0');
		else ans.pb(result%36 + 'A' - 10);
		
		result/=36;		
	}
	while (result>0)
	{
		if (result%36 < 10) ans.pb(result%36 + '0');
		else ans.pb(result%36 + 'A' - 10);
		
		result/=36;	
	}
	int tam = ans.size();
	for (i = 0; i < tam/2; i++)
	{
		char aux = ans[i];
		ans[i] = ans[tam-i-1];
		ans[tam-i-1] = aux;
	}
}
int main ()
{
	string s1;
	string s2;
	string ans;
	while(1)
	{
		cin >> s1 >> s2;
		if (s1 == "0" && s2 == "0") return 0;
		soma(s1,s2,ans);
		cout << ans << '\n';
		ans.clear();
	}
}
