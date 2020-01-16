#include <iostream>
#include <algorithm>
#include "14503.h"

using namespace std;

int N, M; //세로 가로 방향
int r, c, d = 0;
int _map[2000][50];
int q=0, count=0; //청소 횟수
int clean[2000][50]; //청소한곳 1 안한곳 0
int side[4];//주변 값 저장소

int main() {
	cin >> N >> M;
	cin >> r >> c >> d;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> q;
			_map[i][j] = q;
		}
	}

	if (_map[r - 1][c] == 1 || _map[r][c - 1] == 1 || _map[r + 1][c] == 1 || _map[r][c + 1] == 1 || _map[r - 1][c] == 2 || (_map[r][c - 1] == 2) || (_map[r + 1][c] == 2) || _map[r][c + 1] == 2)
	{//0북->3서->2남->1동
			//d
		if (_map[r - 1][c] == 1 || _map[r][c - 1] == 1 || _map[r + 1][c] == 1 || _map[r][c + 1] == 1) { break; 작동 멈춤 }
		//c
		if (d == 0) { r = r + 1, count++, while문 첫번째로 이동; }
		else if (d == 3) { c = c + 1, count++, while문 첫번째로 이동; }
		else if (d == 2) { r = r - 1, count++, while문 첫번째로 이동; }
		else if (d == 1) { c = c - 1, count++, while문 첫번째로 이동; }
		
	}
	//a,b
	//a
	if (_map[r][c - 1] == 0) {
		if (d == 0) { d=3,r=r-1; }//북쪽방향
		if (d == 1) { d=0,c=c+1; }//동쪽방향
		if (d == 2) { d=1,r=r+1; }//남쪽방향
		if (d == 3) { d=2,c=c-1; }//서쪽방향
		//1번으로 이동
	}
	//b
	if (_map[r][c - 1] == 1) {
		if (d == 0) { d = 3 ; }//북쪽방향
		if (d == 1) { d = 0 ; }//동쪽방향
		if (d == 2) { d = 1 ; }//남쪽방향
		if (d == 3) { d = 2 ; }//서쪽방향
	}


	//2번 조건 dcba순서로
	if (_map[r][c] == 0) {
		_map[r][c] == 2;
		while (search()) {
			for (int i = 0; i < 4; i++) {
				if (side[i] == 1 || side[i] == 2) {
					//후진이벽이라면 작동 멈춤
					//방향 유지한채 한칸 후진
				}
			}
		}
	}
	printf("%d", count);
	//1.d부터 
	//c
	//b
	//a
	//0->3->2->1
}

int _dir(int d) {
	if (_map[r - 1][c] == 1|| _map[r][c - 1] == 1 || _map[r + 1][c] == 1 || _map[r][c + 1] == 1 || _map[r - 1][c] == 2 || (_map[r][c - 1] == 2) || (_map[r + 1][c] == 2) || _map[r][c + 1] == 2)
}

int frontjump() {
	if (_map[r - 1][c] == 2 || (_map[r][c - 1] == 2) || (_map[r + 1][c] == 2) || _map[r][c + 1] == 2) 
}

//0북->3서->2남->1동
//탐색 함수
int search() {
	if (_map[r - 1][c] == 2) { side[3] = 2; }//서쪽탐색
	if (_map[r][c - 1] == 2) { side[2] = 2; }//남쪽
	if (_map[r + 1][c] == 2) { side[1] = 2; }//동쪽
	if (_map[r][c + 1] == 2) { side[0] = 2; }//북쪽

	if (_map[r - 1][c] == 1) {  side[3]=1; }
	if (_map[r][c - 1] == 1) { side[2] = 1; }
	if (_map[r + 1][c] == 1) { side[1] = 1; }
	if (_map[r][c + 1] == 1) { side[0] = 1; }

}