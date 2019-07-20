#include <iostream>
using namespace std;

int main(void) {
	int n;
	while (true) {
		cin >> n;
		if (n >= 1 & n <= 10000) break;
	}
	cout << n * (n + 1) / 2 << endl;
	return 0;
}