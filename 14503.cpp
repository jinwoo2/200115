#include <iostream>
#include <algorithm>
#include "14503.h"

using namespace std;

int N, M; //���� ���� ����
int r, c, d = 0;
int _map[2000][50];
int q=0, count=0; //û�� Ƚ��
int clean[2000][50]; //û���Ѱ� 1 ���Ѱ� 0
int side[4];//�ֺ� �� �����

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
	{//0��->3��->2��->1��
			//d
		if (_map[r - 1][c] == 1 || _map[r][c - 1] == 1 || _map[r + 1][c] == 1 || _map[r][c + 1] == 1) { break; �۵� ���� }
		//c
		if (d == 0) { r = r + 1, count++, while�� ù��°�� �̵�; }
		else if (d == 3) { c = c + 1, count++, while�� ù��°�� �̵�; }
		else if (d == 2) { r = r - 1, count++, while�� ù��°�� �̵�; }
		else if (d == 1) { c = c - 1, count++, while�� ù��°�� �̵�; }
		
	}
	//a,b
	//a
	if (_map[r][c - 1] == 0) {
		if (d == 0) { d=3,r=r-1; }//���ʹ���
		if (d == 1) { d=0,c=c+1; }//���ʹ���
		if (d == 2) { d=1,r=r+1; }//���ʹ���
		if (d == 3) { d=2,c=c-1; }//���ʹ���
		//1������ �̵�
	}
	//b
	if (_map[r][c - 1] == 1) {
		if (d == 0) { d = 3 ; }//���ʹ���
		if (d == 1) { d = 0 ; }//���ʹ���
		if (d == 2) { d = 1 ; }//���ʹ���
		if (d == 3) { d = 2 ; }//���ʹ���
	}


	//2�� ���� dcba������
	if (_map[r][c] == 0) {
		_map[r][c] == 2;
		while (search()) {
			for (int i = 0; i < 4; i++) {
				if (side[i] == 1 || side[i] == 2) {
					//�����̺��̶�� �۵� ����
					//���� ������ä ��ĭ ����
				}
			}
		}
	}
	printf("%d", count);
	//1.d���� 
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

//0��->3��->2��->1��
//Ž�� �Լ�
int search() {
	if (_map[r - 1][c] == 2) { side[3] = 2; }//����Ž��
	if (_map[r][c - 1] == 2) { side[2] = 2; }//����
	if (_map[r + 1][c] == 2) { side[1] = 2; }//����
	if (_map[r][c + 1] == 2) { side[0] = 2; }//����

	if (_map[r - 1][c] == 1) {  side[3]=1; }
	if (_map[r][c - 1] == 1) { side[2] = 1; }
	if (_map[r + 1][c] == 1) { side[1] = 1; }
	if (_map[r][c + 1] == 1) { side[0] = 1; }

}