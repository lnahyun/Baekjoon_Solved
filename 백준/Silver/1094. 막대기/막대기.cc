//1094번 막대기
#include <iostream>
#include <vector>
using namespace std;


int main() {
	int finalCM, stickcnt = 0, findex = 0;
	cin >> finalCM;
	vector <int> vec;
	vec.push_back(64);
	while (1) {
		//가지고 있는 막대의 길이를 모두 더한다.
		int totallength = 0;
		for (int i = 0; i < vec.size(); i++) {
			totallength += vec[i];
		}
		if (totallength == finalCM) {
			stickcnt = vec.size();
			break;
		}

		//가장 짧은 것 계산
		int Minstick = vec[0];
		for (int i = 0; i < vec.size(); i++)
			if (Minstick > vec[i]) {
				Minstick = vec[i];
				findex = i;
			}

		vec.erase(vec.begin() + findex);

		//Minstick 자르고 하나만 배열에 저장
		Minstick = Minstick / 2;
		vec.push_back(Minstick);

		//남아있는 길이를 계산한후, finalCM보다 작으면 자른 것의 한 쪽을 다시 저장
		totallength = 0;
		for (int i = 0; i < vec.size(); i++)
			totallength += vec[i];

		if (totallength < finalCM)
			vec.push_back(Minstick);

		else if (totallength > finalCM)
			continue;
	}

	cout << stickcnt;
}