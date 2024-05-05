#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	while (1) {
		string num;
		cin >> num;

		if (num == "0")
			break;

		string firstnum = num;
		reverse(num.begin(), num.end());

		if (stoi(firstnum) == stoi(num)) {
			cout << "yes" << endl;;
		}
		else
			cout << "no" << endl;;

		
			

	}
}