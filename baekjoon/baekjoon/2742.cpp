/*
����

�ڿ��� N�� �־����� ��, N���� 1���� �� �ٿ� �ϳ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�

ù° �ٿ� 100,000���� �۰ų� ���� �ڿ��� N�� �־�����.
���

ù° �ٺ��� N��° �� ���� ���ʴ�� ����Ѵ�.
*/

#include <iostream>
using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	if (N > 1000000) return -1;
	for (int i = N; i > 0; i--) {
		cout << i << '\n';
	}
	return 0;
}