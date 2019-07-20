#include<iostream>
using namespace std;

inline int sum(int a, int b) { return ((a)+(b)); }

int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int T, A, B;
	cin >> T;
	while (T--) {
		cin >> A >> B;
		cout << sum(A, B) << '\n';
	}
	return 0;
}