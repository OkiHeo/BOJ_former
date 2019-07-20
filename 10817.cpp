#include <iostream>
using namespace std;

int main(void) {
	int A, B, C;
	cin >> A >> B >> C;

	if (A >= B) {
		if (B >= C) {
			cout << B;
		}
		else {
			if (A >= C) {
				cout << C;
			}
			else cout << A;
		}
	}
	else {
		if (A >= C) {
			cout << A;
		}
		else {
			if (B <= C) {
				cout << B;
			}
			else cout << C;
		}
	}
}