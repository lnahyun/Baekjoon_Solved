#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int hour, min, userTime, result = 0;
	cin >> hour >> min;
	cin >> userTime;

	int phour = userTime / 60;
	int pmin = userTime % 60;

	hour += phour;
	min += pmin;

	if (min > 59) {
		hour += 1;
		min -= 60;
	}

	if (hour > 23) {
		hour -= 24;
	}

	cout << hour << ' ' << min;
}
