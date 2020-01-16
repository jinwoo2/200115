#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>

using namespace std;

int zero = 0, one = 0;

int fibonacci(int n) {
	static int memo[41] = { 0 };
	if (n == 0) {  //0��° �迭
		return 0;
	}
	else if (n == 1) {		//1��° �迭
		return 1;
	}
	else if (memo[n] > 0) {	  //2��° �̻��� �迭  fibonacchi(3)�� memo[3] ���� ������ �۾�
		return memo[n];
	}

	return memo[n] = fibonacci(n - 1) + fibonacci(n - 2);    //dp�� ��
}

int main() {

	int T=0;
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		int temp;
		scanf("%d", &temp);

		if (temp == 0) printf("1 0\n");
		else if (temp == 1) printf("0 1\n");
		else {
			fibonacci(temp);
			printf("%d %d\n", fibonacci(temp - 1), fibonacci(temp));
		}
	}

}