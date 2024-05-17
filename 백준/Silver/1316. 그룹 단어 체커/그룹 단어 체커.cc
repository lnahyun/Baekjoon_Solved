#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int N; cin >> N;
	int GroupWord = 0;
	for (int i = 0; i < N; i++) {
		string str; cin >> str;
		int cnt = 0;
		bool Alpha[26] = { false, };
		Alpha[str[0] - 'a'] = true;

		for (int j = 1; j < str.length(); j++) {
			if (str[j] == str[j - 1]) //연속 문자 처리
				continue;
			else if (Alpha[str[j] - 'a'] == false) //연속되는 문자가 아니라 새로운 문자가 등장했을 때
				Alpha[str[j] - 'a'] = true;
			else
				cnt++;
		}
		if (cnt == 0)
			GroupWord++;
	}
	cout << GroupWord;
}