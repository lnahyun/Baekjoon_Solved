#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;
	int startindex = 1, endindex = 1, count = 1;
	int sum = 1;
	while (1) {
		if (N == 1) {
			count = 1;
			break;
		}
		if (sum == N) {
		count++;
		sum -= startindex;
		startindex++;
		}
		else if (sum < N) {
			endindex++;
			sum += endindex;
		}
		else if (sum > N) {
			sum -= startindex;
			startindex++;
		}

		if (startindex == N)
			break;
	}
	cout << count;
}