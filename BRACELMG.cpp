#include <bits/stdc++.h>

using namespace std;
int main ()
{
	string s1;
	string s2;
	string s3;
	
	int n;
	
	cin >> n;
	while(n--)
	{
		cin >> s1 >> s2;
		
		s2+=s2;
		s3 = s2;
		reverse(s3.begin(), s3.end());
		
		if (s2.find(s1) != string::npos ||  s3.find(s1) != string::npos) cout << "S\n";
		else cout << "N\n";
		
	}
}
