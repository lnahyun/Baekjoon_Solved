//1110번 더하기 사이클
#include <iostream>
#include <string>

using namespace std;

int main() {
	string n; cin >> n;
	if (stoi(n) < 10) {
		n = '0' + n;
	}

	int count = 0;
	string newnum = n;

	do {
		string firstn = newnum.substr(0, 1);
		string secondn = newnum.substr(1, 1);

		int Sum = stoi(firstn) + stoi(secondn);

		newnum = secondn + to_string(Sum % 10);

		count++;
	} while (newnum != n);

	cout << count;
}
