#pragma once

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

		if (_map[r - 1][c] == 1 || _map[r][c - 1] == 1 || _map[r + 1][c] == 1 || _map[r][c + 1] == 1) { break; �۵� ���� }

		if (d == 0) { r = r + 1, count++, while�� ù��°�� �̵�; }
		else if (d == 3) { c = c + 1, count++, while�� ù��°�� �̵�; }
		else if (d == 2) { r = r - 1, count++, while�� ù��°�� �̵�; }
		else if (d == 1) { c = c - 1, count++, while�� ù��°�� �̵�; }

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
