/*
문제

Given two integers A and B, A modulo B is the remainder when dividing A by B. For example, the numbers 7, 14, 27 and 38 become 1, 2, 0 and 2, modulo 3. Write a program that accepts 10 numbers as input and outputs the number of distinct numbers in the input, if the numbers are considered modulo 42.
입력

The input will contain 10 non-negative integers, each smaller than 1000, one per line. 

 
출력

Output the number of distinct values when considered modulo 42 on a single line. */
/*
문제

두 자연수 A와 B가 있을 때, A%B는 A를 B로 나눈 나머지 이다. 예를 들어, 7, 14, 27, 38을 3으로 나눈 나머지는 1, 2, 0, 2이다. 

수 10개를 입력받은 뒤, 이를 42로 나눈 나머지를 구한다. 그 다음 서로 다른 값이 몇 개 있는지 출력하는 프로그램을 작성하시오.
입력

첫째 줄부터 열번째 줄 까지 숫자가 한 줄에 하나씩 주어진다. 이 숫자는 1,000보다 작거나 같고, 음이 아닌 정수이다.
출력

첫째 줄에, 42로 나누었을 때, 서로 다른 나머지가 몇 개 있는지 출력한다.
*/
#include <iostream>
using namespace std;

int main(void)
{
	int nums[10];		// 10개의 수 저장. 0<num<1000
	int mod42[42] = { 0 };
	int diff = 0;		// 서로 다른 나머지의 개수
	for (int i = 0; i < 10; i++) {
		while (true) {
			cin >> nums[i];
			if (0 <= nums[i] && nums[i] <= 1000) {
				mod42[nums[i] % 42]=1;
				break;
			}
		}
	}
	for (int i = 0; i < 42; i++) {
		diff += mod42[i];
	}
	cout << diff;
	return 0;
}
