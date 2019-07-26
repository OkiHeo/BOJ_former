/*
문제

9개의 서로 다른 자연수가 주어질 때, 이들 중 최댓값을 찾고 그 최댓값이 몇 번째 수인지를 구하는 프로그램을 작성하시오.

예를 들어, 서로 다른 9개의 자연수

3, 29, 38, 12, 57, 74, 40, 85, 61

이 주어지면, 이들 중 최댓값은 85이고, 이 값은 8번째 수이다.
입력

첫 째 줄부터 아홉 번째 줄까지 한 줄에 하나의 자연수가 주어진다. 주어지는 자연수는 100 보다 작다.
출력

첫째 줄에 최댓값을 출력하고, 둘째 줄에 최댓값이 몇 번째 수인지를 출력한다.
*/
#include <iostream>
using namespace std;

int main(void)
{
	int num[9];
	for (int i = 0; i < 9; i++) {
		while (true) {
			cin >> num[i];
			if (num[i] < 100 && num[i]>0) break;
		}
	}
	int max, maxidx;
	max = num[0]; maxidx = 0;
	for (int i = 0; i < 9; i++) {
		if (num[i] > max)
		{
			max = num[i];
			maxidx = i;
		}
	}
	cout << max << '\n' << maxidx+1;
	return 0;
}
/*
	배열의 인덱스는 0부터 시작한다. 그러므로 몇 번째 수인지 출력하려면 인덱스 값에 1을 더해주어야 한다.
*/