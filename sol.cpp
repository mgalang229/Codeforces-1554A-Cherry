#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<long long> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		long long res = 1;
		for (int i = 0; i < n - 1; i++) {
			// choose the largest product between every pairs (current and next adjacent)
			long long temp = a[i] * a[i + 1];
			res = max(res, temp);
		}
		cout << res << '\n';
	}
	return 0;
}
