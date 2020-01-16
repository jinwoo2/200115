#include <algorithm>
#include <cstdlib>
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int count;
int dp[7]={0};//주사위 숫자값 
int dpcount;//주사위 윗면 인덱스 
int qkddnl;//방위
int _map[20][20];//맵 생성
int N = 0, M = 0;//지도 크기 값 
int x = 0, y = 0, k = 0; //좌표값 

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
		cin >> qkddnl; //방위입력

		if (qkddnl == 1) {
			//동쪽가기
			++x;
			if (x<0 || y<0 || x >= N || y >= M) {
				continue;
			}
			dp[3] = _map[x][y];  //바닥면 주사위로 복사
			int e;
			e = dp[1];
			dp[1] = dp[6];
			dp[6] = dp[3];
			dp[3] = dp[5];
			dp[5] = e;

		}
		else if (qkddnl == 2) {
			//서쪽가기
			--x;
			if (x < 0 || y < 0 || x >= N || y >= M) {
				continue;
			}
			dp[3] = _map[x][y]; //바닥면 주사위로 복사
			int e;
			e = dp[1];
			dp[1] = dp[5];
			dp[5] = dp[3];
			dp[3] = dp[6];
			dp[6] = e;
		}
		else if (qkddnl == 3) {
			//북쪽가기
			++y;
			if (x < 0 || y < 0 || x >= N || y >= M) {
				continue;
			}
			dp[3] = _map[x][y]; //바닥면 주사위로 복사
			int e;
			e = dp[1];
			dp[1] = dp[2];
			dp[2] = dp[3];
			dp[3] = dp[4];
			dp[4] = e;
		}
		else if (qkddnl == 4) {
			//남쪽가기
			--y;
			if (x < 0 || y < 0 || x >= N || y >= M) {
				continue;
			}
			dp[3] = _map[x][y]; //바닥면 주사위로 복사
			int e;
			e = dp[1];
			dp[1] = dp[4];
			dp[4] = dp[3];
			dp[3] = dp[2];
			dp[2] = e;
		}
	}

	//이동한 위치에 0이 쓰여있을 경우 if문
	//_map[][]에 dp[]값 저장
	//그렇지 않을 경우 
	//바닥에 써있는 숫자를 주사위 밑단에 저장
	//바닥을 0으로 바꿈
	if (_map[x][y] == 0) {
		_map[x][y] = dp[3];//3이 바닥면
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
	//동쪽 
	dp[3] = _map[x][y];  //바닥면 주사위로 복사
	int e;
	e = dp[1];
	dp[1] = dp[5];
	dp[5] = dp[3];
	dp[3] = dp[6];
	dp[6] = e;

	
	return 0;
}

int dice2() {
	//서 쪽
	dp[3] = _map[x][y]; //바닥면 주사위로 복사
	int e;
	e = dp[1];
	dp[1] = dp[6];
	dp[6] = dp[3];
	dp[3] = dp[5];
	dp[5] = e;
	return 0;
}
int dice4() {
	//남쪽
	dp[3] = _map[x][y]; //바닥면 주사위로 복사
	int e;
	e = dp[1];
	dp[1] = dp[2];
	dp[2] = dp[3];
	dp[3] = dp[4];
	dp[4] = e;
	return 0;
}
int dice3() {
	//북쪽 
	dp[3] = _map[x][y]; //바닥면 주사위로 복사
	int e;
	e = dp[1];
	dp[1] = dp[4];
	dp[4] = dp[3];
	dp[3] = dp[2];
	dp[2] = e;
	return 0;
}


