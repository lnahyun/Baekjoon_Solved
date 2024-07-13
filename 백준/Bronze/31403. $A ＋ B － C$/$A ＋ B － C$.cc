#include <iostream>
#include <string>
using namespace std;

int main() {
	int A, B, C;
	cin >> A >> B >> C;
	int Isum = A + B - C;
	string Ssum1 = to_string(A) + to_string(B);
	int Ssum2 = stoi(Ssum1) - C;

	cout << Isum << '\n' << Ssum2;
}