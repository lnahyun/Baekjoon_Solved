//10814번
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool CompareMember(string a,string b) {
	int afind = a.find(' ');
	string Suba = a.substr(0, afind);

	int bfind = b.find(' ');
	string Subb = b.substr(0, bfind);
	int aa = stoi(Suba);
	int bb = stoi(Subb);
	return  aa<bb ;
}

int main() {
	int n;
	cin >> n;
	cin.ignore();
	vector<string> v;

	for (int i = 0; i < n; i++) {
		string member;
		getline(cin, member, '\n');
		v.push_back(member);
	}

	stable_sort(v.begin(), v.end(), CompareMember);

	for (int i = 0; i < n; i++) {
		cout << v[i] << '\n';
	}
}