//1940번 - 주몽
#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N; cin >> N;
	int M; cin >> M;

	vector<int> num(N);
	for (int i = 0; i < N; i++) {
		cin >> num[i];
	}
	
	if (N == 1) {
		cout << 0;
		return 0;
	}

	int startindex = 0;
	int finalindex = 1;
	int count = 0;

	while(1) {
		int Sum = num[startindex] + num[finalindex];
		if (Sum == M)
			count++;

		if (finalindex == N - 1) {
			startindex++;
			finalindex = startindex + 1;
		}
		else {
			finalindex++;
		}

		if (startindex == N - 1)
			break;
	}
	cout << count;
}