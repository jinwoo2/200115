#include<iostream>
using namespace std;
int arr[20] = { 0 };

int main() {
	int T, n; //�׽�Ʈ ���� 

	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 4;

	for (int i = 4; i < 11; i++) {
		arr[i] = arr[i - 3] + arr[i - 2] + arr[i - 1];
	}
	cin >> T; //���� �ް� 

	while (T--) //T���� ��ŭ �ؾ� �ϴϱ� T�� ���� �� Tó���ϰ� ���̳ʽ� 
	{
		cin >> n;
		cout << arr[n]<<endl;
	}
	return 0;
	//�ѤѤѰ�� Ʋ�ȴٰ� �ϱ淡 for�����ε� ����
	for (int i = 0; i < T; i++) {
		cin >> n;
		cout << arr[n] << endl;
	}
	return 0;
}