#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main() {
	int n, factorial[13];
	scanf_s("%d", &n);
	factorial[0] = 1;
	for (int i = 1; i <= n; i++) {
		factorial[i] = i * factorial[i - 1];
	}
	printf("%d", factorial[n]);
}