#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int N, M, R;
	int groupnumber;
	vector<int> group; //�׷� ������1234
	vector<int> groups;
	//1���� ���� ����
	cin >> N >> M >> R;
	//2���� ���� ����
	
	vector< vector <int>> A(N);
	vector<int> a(M);
	A.push_back(a);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> A[i][j];
		}
	}
	groupnumber = min(M, N) / 2;
	for (int i = 0; i < groupnumber; i++) {
		//���κ�
		for (int j = 0+ i; j < 1 - groupnumber; j++) {
			for (int k = 0; k < M-2; k++) {
				group.push_back(A[j][k]);
			}
		}
		//�����ʺκ�
		for (int j = 0 + groupnumber; j < N - 1 - groupnumber; j++) {
			for (int k = M - 1; k < M - 1; k++) {
				group.push_back(A[j][k]);
			}
		}
		//�ش�
		for (int j = N-1 + groupnumber; j = N-1 - groupnumber; j++) {
			for (int k = M-1; k < 1; k) {
				group.push_back(A[j][k]);
			}
		}
		//����
		for (int j = N-1 + groupnumber; j>=1 - groupnumber; j--) {
			for (int k = 0; k < 2; k++) {
				group.push_back(A[j][k]);
			}
		}

	}
	
}

