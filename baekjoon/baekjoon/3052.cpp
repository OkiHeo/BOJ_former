/*
����

Given two integers A and B, A modulo B is the remainder when dividing A by B. For example, the numbers 7, 14, 27 and 38 become 1, 2, 0 and 2, modulo 3. Write a program that accepts 10 numbers as input and outputs the number of distinct numbers in the input, if the numbers are considered modulo 42.
�Է�

The input will contain 10 non-negative integers, each smaller than 1000, one per line. 

 
���

Output the number of distinct values when considered modulo 42 on a single line. */
/*
����

�� �ڿ��� A�� B�� ���� ��, A%B�� A�� B�� ���� ������ �̴�. ���� ���, 7, 14, 27, 38�� 3���� ���� �������� 1, 2, 0, 2�̴�. 

�� 10���� �Է¹��� ��, �̸� 42�� ���� �������� ���Ѵ�. �� ���� ���� �ٸ� ���� �� �� �ִ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�

ù° �ٺ��� ����° �� ���� ���ڰ� �� �ٿ� �ϳ��� �־�����. �� ���ڴ� 1,000���� �۰ų� ����, ���� �ƴ� �����̴�.
���

ù° �ٿ�, 42�� �������� ��, ���� �ٸ� �������� �� �� �ִ��� ����Ѵ�.
*/
#include <iostream>
using namespace std;

int main(void)
{
	int nums[10];		// 10���� �� ����. 0<num<1000
	int mod42[42] = { 0 };
	int diff = 0;		// ���� �ٸ� �������� ����
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
