#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int A, cnt = 0;
	bool arr[42] = { false };

	for (int i = 0; i < 10; i++) {
		cin >> A;
		if (!arr[A % 42]) {
			arr[A % 42] = true;
			cnt++;
		}
	}
	cout << cnt;
}