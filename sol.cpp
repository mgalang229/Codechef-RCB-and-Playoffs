#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int x, y, z;
		cin >> x >> y >> z;
		// best case: 2 * Z
		cout << (x + 2 * z >= y ? "YES" : "NO") << '\n';
	}
	return 0;
}
