#include <bits/stdc++.h>

using namespace std;
double angle;
int v0;
int k1;
int k2;

double result(double ang)
{
	return k1*v0*sin(2*ang)/10 + k2*v0*sin(ang)*sin(ang)/20;
}
double solve()
{
	double li = 0;
	double ls = M_PI/2;
	double mid;
	
	while (li <= ls && fabs(ls - li) >= 0.000000009)
	{
		mid = (li + ls) / 2;
		if (result(li) > result(ls))
			ls = mid;
		else if (result(li) < result(ls))
			li = mid;
		else if (result(li) == result(ls))
			break;
	}
	angle = mid;
	return result(mid);
}
int main ()
{
	 int n;
	 
	 double max;	 
	 
	 cin >> n;
	 
	 while(n--)
	 {
	 	cin >> v0 >> k1 >> k2;
	 	
	 	v0*=v0;
	 	
	 	max = solve(); 
 		printf("%.3lf %.3lf\n", angle, max);
	 }
}
