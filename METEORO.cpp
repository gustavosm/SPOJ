#include <bits/stdc++.h>


using namespace std;


struct point
{
	int x, y;
	
	point() {x = y = 0;}
	point(int _x, int _y) : x(_x), y(_y){}
	
	bool operator >= (const point &other) const
	{
		return (other.x == x && other.y == y) || (x >= other.x && y <= other.y);
	}
	bool operator <= (const point &other) const
	{
		return (other.x == x && other.y == y) || (x <= other.x && y >= other.y);
	}
};
struct rec
{

	point dir, esq;
	
	rec() {dir = point(); esq = point();}
	
	rec(point _x, point _y) { dir = _x; esq = _y;}
	
	bool contem(const point & a)
	{
	
		return (a >= dir && a <= esq);
	}
	
};

int main()
{
	ios_base :: sync_with_stdio(0); cin.tie(0);
	int x1, y1, x2, y2;
	int cases;
	
	for (int c = 1; ; ++c)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		
		if (!(x1 + x2 + y1 + y2)) return 0;
		
		rec r = rec(point(x1, y1), point(x2, y2));
		cin >> cases;
		int ans = 0;
		while (cases--)
		{
			cin >> x1 >> y1;
			point p = point(x1, y1);
			
			if (r.contem(p)) ++ans;
		}
		
		cout << "Teste " << c << '\n' << ans << "\n\n";
	}
}
