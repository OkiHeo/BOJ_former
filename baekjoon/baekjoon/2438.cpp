/*
����

ù° �ٿ��� �� 1��, ��° �ٿ��� �� 2��, N��° �ٿ��� �� N���� ��� ����
�Է�

ù° �ٿ� N(1 �� N �� 100)�� �־�����.
���

ù° �ٺ��� N��° �ٱ��� ���ʴ�� ���� ����Ѵ�.
*/
#include <iostream>
using namespace std;

int main(void)
{
	int N; 
	while (true) {
		cin >> N;
		if (N >= 1 && N <= 100) break;
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= i; j++) {
			cout << '*';
		}
		cout << '\n';
	}
	return 0;
}