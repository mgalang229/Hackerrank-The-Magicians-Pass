#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	string tmp;
	vector<string> v;
	int id = 0;
	// for every loop remove the omit the first element by incrementing 'id'
	while (id < (int) s.size()) {
		tmp += s[id++];
		// contatenate the 'tmp' both as a prefix and suffix for every 's[i]'
		for (int i = id; i < (int) s.size(); i++) {
			tmp += (s[i] + tmp);
		}
		// insert 'tmp' in the vector
		v.emplace_back(tmp);
		// reset the 'tmp' variable
		tmp = "";
	}
	for (auto x : v) {
		cout << x << " ";
	}
	cout << '\n';
	return 0;	
}
