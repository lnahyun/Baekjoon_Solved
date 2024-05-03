#include <iostream>
using namespace std;

int main() {
	int N, num, cnt = 0, numcnt = 0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> num;
		if (num <= 0)
			continue;
		if (num == 2)
			cnt++;
		if (num != 1 && num != 2) {
			numcnt = 0;
			for (int j = 2; j < num; j++) {
				if (num % j == 0)
					numcnt++;
			}
			if (numcnt == 0)
				cnt++;
		}
	}
	cout << cnt;
}
