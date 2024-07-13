#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N; cin >> N;

	for (int k = 0; k < N; k++) {
		int cnt = 0; int sum = 0;
		string OX; cin >> OX;
		for (int i = 0; i < OX.length(); i++) {
			if (OX[i] == 'O') {
				cnt++;
				sum += cnt;
			}
			else {
				cnt = 0;
			}
		}
		cout << sum << '\n';
	}
}