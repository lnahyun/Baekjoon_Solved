#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, M, i, j;
	cin >> N >> M;
	vector<int> arr(N+1) ;

	for (int i = 1; i <= N; i++) {
		arr[i]=i;
	}

	for (int k = 1; k <= M; k++) {
		cin >> i >> j;
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	for (int i = 1; i <= N; i++) {
		cout << arr[i] << ' ';
	}
}