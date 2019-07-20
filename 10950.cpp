#include <iostream>
using namespace std;

int main(void) {
	int T;
	cin >> T;		// 테스트 케이스의 개수
	
	while (T--) {
		int A, B;
		cin >> A >> B;
		cout << A + B << endl;
	}

	return 0;
}