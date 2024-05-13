#include <iostream>
using namespace std;

int main() {
	int firstcase, secondcase;
	while (1) {
		cin >> firstcase >> secondcase;

		if (firstcase == 0 && secondcase == 0)
			break;

		else if (secondcase % firstcase == 0)
			cout << "factor" << endl;
		else if (firstcase % secondcase == 0)
			cout << "multiple" << endl;
		else
			cout << "neither" << endl;
	}

}