#include <iostream>
#include <string>
using namespace std;

int main() {
	string S;
	getline(cin, S, '\n');
	int cnt = 1;
	int plus = 0;

	//문자열 앞 공백 제거
	if (S[0] == ' ') {
		if (S.length() == 1) {
			cout << 0;
			return 0;
		}
		plus++;
	}
	
	for (int i = 0+plus; i < S.length() - 1; i++) {
		if (S[i] == ' ') {
			cnt++;
		}
	}

	cout << cnt;
}