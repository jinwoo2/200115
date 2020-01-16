#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
	int x, y=0;
	cin >> x;
	while (x != 0) {
		if (x % 2 == 1) { y++; }
		x /= 2;
	}
	cout << y << endl;
	return 0;
}
