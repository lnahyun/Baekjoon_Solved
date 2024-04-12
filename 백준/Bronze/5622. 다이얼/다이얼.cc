#include <iostream>
using namespace std;

int main() {
	int minTime = 0;
	string A[] = { "ABC", "DEF", "GHI", "JKL",
		"MNO", "PQRS", "TUV", "WXYZ" };
	string B;
	cin >> B;

	for (int i = 0; i < B.length(); i++) {
		for (int j = 0; j < 8; j++) {
			int findex = A[j].find(B[i]);
			if (findex != -1) {
				//minTime = minTime + (findex + 3);
				minTime += j + 3;
			}
		}
	}

	cout << minTime;
}
