#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N, cnt = 0, userFind;
	cin >> N;

	vector<int> arr(N);

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	cin >> userFind;
	
	for (int i = 0; i < N; i++) {
		if (arr[i] == userFind)
			cnt++;
	}

	cout << cnt;
}
