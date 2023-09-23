#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string s;
	cin >> s;

	auto ans = ll{ 1 };
	for (auto i = 0; i < s.length(); ++i) {
		ll m;
		if ('c' == s[i]) {
			m = 26;
		}
		else if ('d' == s[i]) {
			m = 10;
		}

		if (0 < i) {
			if (s[i] == s[i - 1]) {
				--m;
			}
		}

		ans *= m;
	}

	cout << ans;

	return 0;
}