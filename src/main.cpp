#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;
	while (0 < n) {
		auto bf = int{ 0 };

		auto ans = int{ 0 };
		for (int i = 0; i < n; ++i) {
			int s, e;
			cin >> s >> e;

			ans += (e - bf) * s;

			bf = e;
		}

		cout << ans << " miles\n";

		cin >> n;
	}

	return 0;
}