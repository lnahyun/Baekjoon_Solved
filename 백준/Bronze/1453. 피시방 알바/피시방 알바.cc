#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N, w[101] = { 0 }, num, cnt = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num;
		if (w[num] > 0) cnt++;
		else w[num]++;

	}
	cout << cnt << endl;
}
