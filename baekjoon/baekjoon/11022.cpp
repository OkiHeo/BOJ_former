/*

����

�� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�

ù° �ٿ� �׽�Ʈ ���̽��� ���� T�� �־�����.

�� �׽�Ʈ ���̽��� �� �ٷ� �̷���� ������, �� �ٿ� A�� B�� �־�����. (0 < A, B < 10)
���

�� �׽�Ʈ ���̽����� "Case #x: A + B = C" �������� ����Ѵ�. x�� �׽�Ʈ ���̽� ��ȣ�̰� 1���� �����ϸ�, C�� A+B�̴�.

*/
#include <iostream>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int T, A, B; cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> A >> B;
		cout << "Case #" << i + 1 << ": " << A << " + " << B<<" = "<<A + B << '\n';
	}
	return 0;
}