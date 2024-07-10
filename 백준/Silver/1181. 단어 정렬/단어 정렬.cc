#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool Comparelength(const string&a, const string&b) {
	if (a.length() == b.length()) {
		return a < b;
	}
	else
		return a.length() < b.length();
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N; cin >> N;
	vector<string> v;
	for (int i = 0; i < N; i++) {
		string n;  cin >> n;
		int cnt = 0;
		for (int j = 0; j < v.size(); j++) {
			if (n == v[j])
				cnt++;
		}
		if(cnt == 0)
			v.push_back(n);
	}

	sort(v.begin(), v.end(), Comparelength);

	for (auto it = v.begin(); it < v.end(); it++) {
		cout << *it;
		cout << "\n";
	}
}