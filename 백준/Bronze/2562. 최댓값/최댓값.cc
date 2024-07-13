#include <iostream>
using namespace std;

int main() {
	int num[9] = { 0, };
	for (int i = 0; i < 9; i++) {
		cin >> num[i];
	}

	int max = num[0]; int cnt = 1;
	for (int i = 0; i < 9; i++) {
		if (max < num[i]) {
			max = num[i];
			cnt = i + 1;
		}
	}

	cout << max << '\n' << cnt;
}