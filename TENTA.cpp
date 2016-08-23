#include <bits/stdc++.h>

using namespace std;
int cmp(const void *a, const void *b)
{
	return (*(int *) a - (*(int *) b));
}
int main ()
{
	ios_base :: sync_with_stdio(0);
	int v[10];
	int n;
	while (1)
	{
		scanf("%d", &n);
		if (!n ) return 0;
		
		for (int i = 0 ; i < n; i++)
		{
			scanf("%d", &v[i]);
		}
		qsort(v, n, sizeof(int), cmp);
		
		do
		{
			for (int i = 0 ; i < n; i++)
			{
				if (i) printf(" %d", v[i]);
				else printf("%d", v[i]);;
			}
			printf("\n");
		}while(next_permutation(v,v+n));
	}
}
