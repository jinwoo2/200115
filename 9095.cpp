#include<iostream>
using namespace std;
int arr[20] = { 0 };

int main() {
	int T, n; //테스트 개수 

	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 4;

	for (int i = 4; i < 11; i++) {
		arr[i] = arr[i - 3] + arr[i - 2] + arr[i - 1];
	}
	cin >> T; //개수 받고 

	while (T--) //T개수 만큼 해야 하니깐 T도 포함 즉 T처리하고 마이너스 
	{
		cin >> n;
		cout << arr[n]<<endl;
	}
	return 0;
	//ㅡㅡㅡ계속 틀렸다고 하길래 for문으로도 만듬
	for (int i = 0; i < T; i++) {
		cin >> n;
		cout << arr[n] << endl;
	}
	return 0;
}