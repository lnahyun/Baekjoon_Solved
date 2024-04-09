#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int N;
	cin >> N;

	vector<int> arr(N);

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	int min = arr[0];
	for (int i = 1; i < N; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}
	}

	int max = arr[0];
	for (int i = 1; i < N; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}

	cout << min << ' ' << max;

}
