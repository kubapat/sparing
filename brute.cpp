///	maksymilian
///	rozwiazanie wolne w zlozonpsci O (wysokosc drzewa)
///	niezaimplemenotwanie modulo(jak narazie)

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

class Node {
	ll x, y, lx, ly, rx, ry;

	public:
	Node() {
		x = y = ly = rx = 1;
		lx = ry = 0;
	}

	void lewo() {
		rx = x;
		ry = y;
		x = lx + rx;	x%=MOD;
		y = ly + ry;	y%=MOD;
	}

	void prawo() {
		lx = x;
		ly = y;
		x = lx + rx;	x%=MOD;
		y = ly + ry;	y%=MOD;
	}

	void wypisz() {
		cout << x << " " << y << "\n";
	}
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);		cout.tie(0);

	Node u;

	int n;	cin >> n;
	for(int i = 0; i < n; i++) {
		int x;	char z;	cin >> x >> z;
		if(z == 'L') {
			for(int j = 0; j < x; j++) {
				u.lewo();
			}
		}	else	{
			for(int j = 0; j < x; j++) {
				u.prawo();
			}
		}
	}
	u.wypisz();
	return 0;
}
