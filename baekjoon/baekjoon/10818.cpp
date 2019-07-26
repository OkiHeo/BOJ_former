/*
문제

N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.
입력

첫째 줄에 정수의 개수 N (1 ≤ N ≤ 1,000,000)이 주어진다. 둘째 줄에는 N개의 정수를 공백으로 구분해서 주어진다. 모든 정수는 -1,000,000보다 크거나 같고, 1,000,000보다 작거나 같은 정수이다.
출력

첫째 줄에 주어진 정수 N개의 최솟값과 최댓값을 공백으로 구분해 출력한다.
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
	new는 c++에 이미 정의된 키워드라서 변수명으로 사용할 수 없다. 주의하자!
	문제 잘 읽고 출력해야 하는 순서 확인하자.
*/