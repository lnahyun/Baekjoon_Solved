#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio;
	cin.tie(0);
	cout.tie(0);

	int A, B, C;
	cin >> A >> B >> C;

	int num[10] = {0, };
	string sum = to_string(A * B * C);

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < sum.length(); j++) {
			if (sum[j] == '0' + i)
				num[i]++;
		}
	}

	for (int i = 0; i < 10; i++) {
		cout << num[i] << '\n';
	}
}