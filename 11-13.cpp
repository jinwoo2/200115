#include <iostream>
#define endl '|n'

using namespace std;
long long n, m;
long long a[100000];

int main() {
	long long max = 64;
	long long mid;

	check(mid);

}

bool check(long long h) {
	long long count = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] - h > 0) {
			count += a[i] -h;
		}
	}
	return count >= m;
}




#include <iostream>
#define endl '|n'

int main() {
	int x = 0, y = 0;
	int sum = 0;
	int Monthend[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	const char* day[] = { "sun","mon","tue","wed","thu","fri","sat" };

	cin >> x >> y;
	for (int i = 1; i < x; i++) {
		sum += Monthend[i - 1];//1ÀÏ ÆÄ¾Ç
	}
	sum += y;//ÀÏ¼ö ÆÄ¾Ç
	cout << day[sum % 7] << "|n";
	return 0;
}