/*
����

N���� ������ �־�����. �̶�, �ּڰ��� �ִ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�

ù° �ٿ� ������ ���� N (1 �� N �� 1,000,000)�� �־�����. ��° �ٿ��� N���� ������ �������� �����ؼ� �־�����. ��� ������ -1,000,000���� ũ�ų� ����, 1,000,000���� �۰ų� ���� �����̴�.
���

ù° �ٿ� �־��� ���� N���� �ּڰ��� �ִ��� �������� ������ ����Ѵ�.
*/
#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	int N;
	while (true) {
		cin >> N;
		if (N >= 1 && N <= 1000000) break;
	}

	int *nNum = new int[N];
	for (int i = 0; i < N; i++) {
		while (true) {
			int k;
			cin >> nNum[i];
			if (nNum[i] >= -1000000 && nNum[i] <= 1000000) break;
		}
	}
	int max, min;
	max = nNum[0]; min = nNum[0];
	for (int i = 0; i < N; i++) {
		if (nNum[i] >= max) max = nNum[i];
		if (nNum[i] <= min) min = nNum[i];
	}
	cout << min << ' ' << max;
	return 0;
}

/*
	new�� c++�� �̹� ���ǵ� Ű����� ���������� ����� �� ����. ��������!
	���� �� �а� ����ؾ� �ϴ� ���� Ȯ������.
*/