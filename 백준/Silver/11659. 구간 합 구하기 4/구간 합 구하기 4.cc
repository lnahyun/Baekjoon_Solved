//11659번 - 구간 합 구하기4
#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N, M;
	cin >> N >> M;
	int* num = new int[N];
	for (int k = 0; k < N; k++) {
		cin >> num[k];
		num[k] += num[k - 1];
	}
	int i, j;
	for (int k = 0; k < M; k++) {
		cin >> i >> j;
		cout << num[j - 1] - num[i - 2] << '\n';
	}

	delete[] num;
}