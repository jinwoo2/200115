#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <queue>
using namespace std;

#define SWAP(X,Y) {int t; t=X; X=Y; Y=t;}

void bubble(int t[], int n) {
	int i, j;
	for (i = n-1; i > 0; i--) {
		for (j = 0; j < i; j++) {
			if (t[j] > t[j + 1]) {
				swap(t[j], t[j + 1]);
			}
		}
	}
}

void section(int t[], int n) {
	int i, least;
	for (int i = 0; i < n-1; i++) {
		least = i;
		for (int j = i+1; j < n; j++) {
			if (t[j] < t[least]) {
				least = j;
			}
		}
		swap(t[least], t[i]);
	}
}

int main() {
	int a, k,t[10];
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &t[i]);
	}
	section(t,10);
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", t[i]);
	}
}


