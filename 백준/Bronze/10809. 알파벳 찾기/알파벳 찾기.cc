#include <iostream>
#include <string>
using namespace std;


int main() {
	int Alpha[26] = { 0, };
	string S;
	cin >> S;

	for (int i = 0; i < 26; i++) {
		Alpha[i] = -1;
	}

	for (int i = 0; i < S.length(); i++) {
		int first = S.find(S[i]); //S배열 속 S[i]가 처음 등장한 인덱스
		int findex = S[i] - 'a'; //Alpha배열 속 알파벳 인덱스

		if (Alpha[findex] == -1) {
			Alpha[findex] = first;
		}
	}
	for (int i = 0; i < 26; i++) {
		cout << Alpha[i] << ' ';
	}

}