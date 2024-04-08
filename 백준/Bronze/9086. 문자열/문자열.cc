#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int T;
	cin >> T;
	vector<string> arr(T);

	for (int i = 0; i < T; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < T; i++) {
		cout << arr[i].front() << arr[i].back() << "\n";
	}
}