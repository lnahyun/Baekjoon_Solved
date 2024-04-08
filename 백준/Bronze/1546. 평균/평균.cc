#include <iostream>
using namespace std;

int main() {
	double N;
	double sum = 0;
	cin >> N;
	double arr[1001] = { 0, };

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	double M = arr[0];
	for (int i = 1; i < N; i++) {
		if (arr[i] > M)
			M = arr[i];
	}

	for (int i = 0; i < N; i++) {
		arr[i] = arr[i] / M * 100;
	}

	for (int i = 0; i < N; i++) {
		sum += arr[i];
	}


	double average = (double)sum / (double)N;
	cout << average;

}