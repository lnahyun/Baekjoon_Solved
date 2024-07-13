#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<string> v;
	for (int i = 0; i < 8; i++) {
		string n; cin >> n;
		v.push_back(n);
	}
	string sum;
	for (int i = 0; i < 8; i++) {
		sum += v[i];
	}

	if (sum == "12345678")
		cout << "ascending";
	else if (sum == "87654321")
		cout << "descending";
	else
		cout << "mixed";
}