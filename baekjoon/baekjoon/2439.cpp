/*
����

ù° �ٿ��� �� 1��, ��° �ٿ��� �� 2��, N��° �ٿ��� �� N���� ��� ����

������, �������� �������� ������ ��(���� ����)�� ����Ͻÿ�.
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
	int i, j, k;
	for (i = 0; i < N; i++) {
		for (j = N - i - 1; j > 0; j--)
			cout << ' ';
		for (k = N-i-1; k < N; k++)
			cout << '*';
		cout << '\n';
	}
	return 0;
}