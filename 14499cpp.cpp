#include <algorithm>
#include <cstdlib>
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int count;
int dp[7]={0};//�ֻ��� ���ڰ� 
int dpcount;//�ֻ��� ���� �ε��� 
int qkddnl;//����
int _map[20][20];//�� ����
int N = 0, M = 0;//���� ũ�� �� 
int x = 0, y = 0, k = 0; //��ǥ�� 

int main() {
	cin >> N >> M >> x >> y >> k ;

	for (int i = 1; i < N + 1; i++) {
		for (int j = 1; j < M + 1; j++) {
			int q = 0;
			cin >> q ;
			_map[i][j] = q;
		}
	}

	for (int i = 1; i <= k; i++) {
		cin >> qkddnl; //�����Է�

		if (qkddnl == 1) {
			//���ʰ���
			++x;
			if (x<0 || y<0 || x >= N || y >= M) {
				continue;
			}
			dp[3] = _map[x][y];  //�ٴڸ� �ֻ����� ����
			int e;
			e = dp[1];
			dp[1] = dp[6];
			dp[6] = dp[3];
			dp[3] = dp[5];
			dp[5] = e;

		}
		else if (qkddnl == 2) {
			//���ʰ���
			--x;
			if (x < 0 || y < 0 || x >= N || y >= M) {
				continue;
			}
			dp[3] = _map[x][y]; //�ٴڸ� �ֻ����� ����
			int e;
			e = dp[1];
			dp[1] = dp[5];
			dp[5] = dp[3];
			dp[3] = dp[6];
			dp[6] = e;
		}
		else if (qkddnl == 3) {
			//���ʰ���
			++y;
			if (x < 0 || y < 0 || x >= N || y >= M) {
				continue;
			}
			dp[3] = _map[x][y]; //�ٴڸ� �ֻ����� ����
			int e;
			e = dp[1];
			dp[1] = dp[2];
			dp[2] = dp[3];
			dp[3] = dp[4];
			dp[4] = e;
		}
		else if (qkddnl == 4) {
			//���ʰ���
			--y;
			if (x < 0 || y < 0 || x >= N || y >= M) {
				continue;
			}
			dp[3] = _map[x][y]; //�ٴڸ� �ֻ����� ����
			int e;
			e = dp[1];
			dp[1] = dp[4];
			dp[4] = dp[3];
			dp[3] = dp[2];
			dp[2] = e;
		}
	}

	//�̵��� ��ġ�� 0�� �������� ��� if��
	//_map[][]�� dp[]�� ����
	//�׷��� ���� ��� 
	//�ٴڿ� ���ִ� ���ڸ� �ֻ��� �شܿ� ����
	//�ٴ��� 0���� �ٲ�
	if (_map[x][y] == 0) {
		_map[x][y] = dp[3];//3�� �ٴڸ�
	}
	else {
		dp[3] = _map[x][y];
		_map[x][y] = 0;
	}

	for (int i = 1; i <= k; i++) {
		printf("%d\n",dp[1]);
	}

	return 0;
}

int dice1() {
	//���� 
	dp[3] = _map[x][y];  //�ٴڸ� �ֻ����� ����
	int e;
	e = dp[1];
	dp[1] = dp[5];
	dp[5] = dp[3];
	dp[3] = dp[6];
	dp[6] = e;

	
	return 0;
}

int dice2() {
	//�� ��
	dp[3] = _map[x][y]; //�ٴڸ� �ֻ����� ����
	int e;
	e = dp[1];
	dp[1] = dp[6];
	dp[6] = dp[3];
	dp[3] = dp[5];
	dp[5] = e;
	return 0;
}
int dice4() {
	//����
	dp[3] = _map[x][y]; //�ٴڸ� �ֻ����� ����
	int e;
	e = dp[1];
	dp[1] = dp[2];
	dp[2] = dp[3];
	dp[3] = dp[4];
	dp[4] = e;
	return 0;
}
int dice3() {
	//���� 
	dp[3] = _map[x][y]; //�ٴڸ� �ֻ����� ����
	int e;
	e = dp[1];
	dp[1] = dp[4];
	dp[4] = dp[3];
	dp[3] = dp[2];
	dp[2] = e;
	return 0;
}


