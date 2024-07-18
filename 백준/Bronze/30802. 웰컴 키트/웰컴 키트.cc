#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;
	int Size[6] = { 0, };
	for (int i = 0; i < 6; i++) {
		cin >> Size[i];
	}
	int T, P;
	cin >> T >> P;

	//티셔츠 묶음 계산
	int Sum = 0;
	for (int i = 0; i < 6; i++) {
		int n = Size[i] / T;
		if (Size[i] % T != 0)
			Sum += (n + 1);
		else
			Sum += n;
	}

	//펜 묶음 계산
	int Pencila = N / P;
	int Pencilb = N % P;

	cout << Sum << '\n' << Pencila << ' ' << Pencilb;
}