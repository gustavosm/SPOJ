#include <bits/stdc++.h>


using namespace std;

class SegTree {

public:
	void build(int _n)
	{
		n = _n;
		memset(lazy, 0, sizeof lazy);
		_build(1, 1, n);
	}
	
	void update(int l, int r)
	{
		_update(1, 1, n, l, r);
	}
	
	int query(int l, int r)
	{
		return _query(1, 1, n, l, r);
	}

private:
	int st[2005];
	int lazy[2005];
	int n;
	
	void _build(int idx, int i, int j)
	{
		if (i == j)
			st[idx] = 1;
		else
		{
			int b = (idx << 1);
			int e = b + 1;
			int mid = (i + j) >> 1;
			
			_build(b, i, mid);
			_build(e, mid + 1, j);
			
			st[idx] = st[b] + st[e];
		}
	}
	
	void prop(int idx, int b, int e)
	{
		if (lazy[idx])
		{
			st[idx] = 0;
			lazy[idx] = 0;
			if (b != e)
				lazy[(idx << 1)] = lazy[(idx << 1) + 1] = 1;
		}
	}
	
	void _update(int idx, int i, int j, int l, int r)
	{
		prop(idx, i, j);
		
		if (i > r || j < l) return;
		if (i >= l && j <= r)
		{
			lazy[idx] = 1;
			prop(idx, i, j);
		}
		else
		{
			int b = (idx << 1);
			int e = b + 1;
			int mid = (i + j) / 2;
			_update(b, i, mid, l, r);
			_update(e, mid + 1, j, l, r);
			
			st[idx] = st[b] + st[e];
		}
	}
	
	int _query(int idx, int i, int j, int l, int r)
	{
		prop(idx, i, j);
		
		if (i > r || j < l) return 0;
		if (i >= l && j <= r) return st[idx];
		else
		{			
			int b = (idx << 1);
			int e = b + 1;
			int mid = (i + j) / 2;
			
			int x1 = _query(b, i, mid, l, r);
			int x2 = _query(e, mid + 1, j, l, r);
			
			return x1 + x2;
		}
	}
};


SegTree seg[505];

int main()
{
	ios_base :: sync_with_stdio(0);
	cin.tie(0);
	
	int w, h, n;
	int x1, x2, y1, y2;
	
	while (cin >> w >> h >> n)
	{
		if (!w && !h && !n) return 0;
		
		for (int i = 1 ; i <= w; ++i)
			seg[i].build(h);
		
		while (n--)
		{
			cin >> x1 >> y1 >> x2 >> y2;
			
			if (x1 > x2) swap(x1, x2);
			if (y1 > y2) swap(y1, y2);
			
			for (int i = x1; i <= x2; ++i)
				seg[i].update(y1, y2);
		}
		
		int ans = 0;
		for (int i = 1; i <= w; ++i)
			ans += seg[i].query(1, h);
			
		if (ans == 0) cout << "There is no empty spots.\n";
		else if (ans == 1) cout << "There is one empty spot.\n";
		else cout << "There are " << ans << " empty spots.\n";
	}	
}
