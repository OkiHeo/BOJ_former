/*
����

�� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�

ù° �ٿ� �׽�Ʈ ���̽��� ���� T�� �־�����.

�� �׽�Ʈ ���̽��� �� �ٷ� �̷���� ������, �� �ٿ� A�� B�� �־�����. (0 < A, B < 10)
���

�� �׽�Ʈ ���̽����� "Case #x: "�� ����� ����, A+B�� ����Ѵ�. �׽�Ʈ ���̽� ��ȣ�� 1���� �����Ѵ�.
*/
#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	int T;
	cin >> T;		//�׽�Ʈ ���̽� ����

	int A, B;
	for(int i=1; i<=T; i++){
		cin >> A >> B;
		cout << "Case #" << i << ": " << A + B << '\n';
	}
	return 0;
}