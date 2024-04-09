#include <iostream>
using namespace std;


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N, Y = 0, M = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int time;
		cin >> time;
		Y += ((time / 30 ) + 1) * 10;
		M += ((time / 60) + 1) * 15;
	}

	if (Y < M) { cout << 'Y' << ' ' << Y; }
	else if (M < Y) { cout << 'M' << ' ' << M; }
	else { cout << 'Y' << ' ' << 'M' << ' ' << Y; }
}