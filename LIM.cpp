#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <set>
#include <map>
#include <memory.h>
#include <stack>
 
 
 
 
using namespace std;
 
#define oo (int)1e9
 
double eqn[305][305];
int m1[305];
int m2[305];
		
 
int P[310];
 

double a[310][310];
double b[310];
double x[310];
double y[310];
 
double solve(int counter)
{
	int N = counter;
	
	for(int n = 0; n < N-1; ++n)
	{
		int max = n;
		
		for(int m = n + 1; m < N; ++m)
		{
			if(fabs(eqn[m][n]) > fabs(eqn[max][n]))
				max = m;
		}
		for(int m = 0; m <= N; ++m)
			swap(eqn[n][m],eqn[max][m]);
		
		for(int m = n + 1; m < N; ++m)
		{
			double fac = eqn[m][n] / eqn[n][n];
			
			eqn[m][n] = eqn[m][n] - (fac * eqn[n][n]);
			
			for(int k= n + 1;k <= N; ++k)
				eqn[m][k] = eqn[m][k] - (fac*eqn[n][k]);
		}
	}
	
	double val[N];
	
	for(int n = N - 1; n >= 0; --n)
	{
		double minus = 0;
		
		for(int k = n + 1; k < N; ++k)
			minus += val[k] * eqn[n][k];
		
		eqn[n][N] -= minus;
		eqn[n][N] /= eqn[n][n];
		
		val[n] = eqn[n][N];
	}
 
	return val[0];
}
 
int main()
{
	ios_base :: sync_with_stdio(0); cin.tie(0);
	
	while(1)
	{
		int N;
		scanf("%d",&N);
		
		if(!N) return 0;
		
		vector<int> next[301];
		
		bool used[301];
		
		memset(used, false, sizeof used);
		memset(m1, 0, sizeof m1);
		memset(m2, 0,sizeof m2);
 
		for(int n = 0; n < N; ++n)
		{
			int a,b;
			
			scanf("%d %d",&a,&b);
		
			next[a].push_back(b);
			next[b].push_back(a);
		}
		
		stack<int> s;
		s.push(0);
		//nao saquei essa pilha aqui
		while(!s.empty())
		{
			int pos = s.top();
			s.pop();
			
			if(!used[pos])
			{
				used[pos] = true;
				
				for(vector<int>::iterator it = next[pos].begin(); it != next[pos].end(); ++it)
				{
					if(*it <= 290 && !used[*it])
						s.push(*it);
				}
			}
		}
		
		int counter = 0;
		
		for(int n = 0; n <= 290; ++n)
		{
			if(used[n])
			{
				m2[counter] = n;
				m1[n] = counter;
				++counter;
			}
		}

		for(int n = 0; n <= counter; ++n)
		{
			for(int m = 0; m <= counter; ++m)
				eqn[n][m] = 0.0;
		}
 
		for(int n = 0; n < counter; ++n)
		{
			int pos = m2[n];
			
			eqn[n][n] = next[pos].size();
			
			for(vector<int>::iterator it = next[pos].begin(); it != next[pos].end(); ++it)
			{
				if(*it > 290)
				{
					if(*it == 300)
						eqn[n][counter] = 1.0;
				}
				else
					eqn[n][m1[*it]] = -1.0;
			}
		}
		
		printf("%.3lf\n", fabs( solve(counter) ) );		
	}
	
	return 0;
}
