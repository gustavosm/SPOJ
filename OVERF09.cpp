#include <bits/stdc++.h>

using namespace std;
int main()
{
	int n;
	int op1;
	char op2;
	int op3;
	cin >> n;
	scanf("%d %c %d", &op1, &op2, &op3);
	switch(op2)
	{
		case '+':
			op1+=op3;
			break;
		case '-':
			op1-=op3;
			break;
		case '*':
			op1*=op3;
			break;
		case '/':
			op1/=op3;
			break;
	}
	if (op1 > n) cout << "OVERFLOW\n";
	else cout << "OK\n";
}
