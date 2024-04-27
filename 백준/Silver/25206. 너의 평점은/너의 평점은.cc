#include <iostream>
#include <string>

using namespace std;

int main() {

	string Subject[20], mark[20];
	double grade[20];

	double pGradesum = 0; //학점의 총합
	double pMark = 0, GMsum = 0;

	//전공평점 계산
	for (int i = 0; i < 20; i++) {
		cin >> Subject[i] >> grade[i] >> mark[i];

		if (mark[i] == "A+")
			pMark = 4.5;
		else if (mark[i] == "A0")
			pMark = 4.0;
		else if (mark[i] == "B+")
			pMark = 3.5;
		else if (mark[i] == "B0")
			pMark = 3.0;
		else if (mark[i] == "C+")
			pMark = 2.5;
		else if (mark[i] == "C0")
			pMark = 2.0;
		else if (mark[i] == "D+")
			pMark = 1.5;
		else if (mark[i] == "D0")
			pMark = 1.0;
		else if (mark[i] == "F")
			pMark = 0.0;
		else {
			pMark = 0.0, grade[i] = 0.0;
		}
		pGradesum += grade[i];
			

		double grademark = grade[i] * pMark;
		GMsum += grademark;
	}

	double avg = GMsum / pGradesum;
	cout << avg;


}