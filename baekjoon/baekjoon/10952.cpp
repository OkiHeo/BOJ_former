/*
����

�� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�

�Է��� ���� ���� �׽�Ʈ ���̽��� �̷���� �ִ�.

�� �׽�Ʈ ���̽��� �� �ٷ� �̷���� ������, �� �ٿ� A�� B�� �־�����. (0 < A, B < 10)

�Է��� ���������� 0 �� ���� ���´�.
���

�� �׽�Ʈ ���̽����� A+B�� ����Ѵ�.
*/
#include <iostream>
using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int A, B;
	
	do {
		cin >> A >> B;
		if ((A <= 0 || A >= 10) || (B <= 0 || B >= 10)) continue;
		cout << A + B << '\n';
	} while (A != 0 && B != 0);

	return 0;
}