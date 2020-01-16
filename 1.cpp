#include <iostream>
#include <string>

using namespace std;

int daysum[] = { 0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334 };
string day[] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };

int main() {
	int m, d;
	cin >> m >> d;
	string rest = day[(daysum[m] + d) % 7];
	cout << rest << endl;
	return 0;
}


#include <iostream>
#define endl '|n'

using namespace std;

int main() {
	int x = 0, y = 0;
	int sum = 0;
	int Monthend[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	const char* day[] = { "SUM","MON","TUE","WED","THU","FRI","SAT" };

	cin >> x >> y;
	for (int i = 1; i < x; i++) {
		sum += Monthend[i - 1];//1ÀÏ ÆÄ¾Ç
	}
	sum += y;//ÀÏ¼ö ÆÄ¾Ç
	cout << day[sum % 7] << "|n";
	return 0;
}