//1181번
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool Comparelength(string a, string b) {
	if (a.length() == b.length()) {
		return a < b;
	}
	else
		return a.length() < b.length();
}

int main() {
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
		cout << endl;
	}
}