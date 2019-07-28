/*
����

There is an objective test result such as ��OOXXOXXOOO��. An ��O�� means a correct answer of a problem and an ��X�� means a wrong answer. The score of each problem of this test is calculated by itself and its just previous consecutive ��O��s only when the answer is correct. For example, the score of the 10th problem is 3 that is obtained by itself and its two previous consecutive ��O��s. 

Therefore, the score of ��OOXXOXXOOO�� is 10 which is calculated by ��1+2+0+0+1+0+0+1+2+3��. 

You are to write a program calculating the scores of test results. 
�Է�

Your program is to read from standard input. The input consists of T test cases. The number of test cases T is given in the first line of the input. Each test case starts with a line containing a string composed by ��O�� and ��X�� and the length of the string is more than 0 and less than 80. There is no spaces between ��O�� and ��X��. 
���

Your program is to write to standard output. Print exactly one line for each test case. The line is to contain the score of the test case. 
*/
/*
����

"OOXXOXXOOO"�� ���� OX������ ����� �ִ�. O�� ������ ���� ���̰�, X�� ������ Ʋ�� ���̴�. ������ ���� ��� �� ������ ������ �� �������� ���ӵ� O�� ������ �ȴ�. ���� ���, 10�� ������ ������ 3�� �ȴ�.

"OOXXOXXOOO"�� ������ 1+2+0+0+1+0+0+1+2+3 = 10���̴�.

OX������ ����� �־����� ��, ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�

ù° �ٿ� �׽�Ʈ ���̽��� ������ �־�����. �� �׽�Ʈ ���̽��� �� �ٷ� �̷���� �ְ�, ���̰� 0���� ũ�� 80���� ���� ���ڿ��� �־�����. ���ڿ��� O�� X������ �̷���� �ִ�.
���

�� �׽�Ʈ ���̽����� ������ ����Ѵ�.
*/
#include <iostream>
#include <cstring>
using namespace std;
int main(void)
{
	int T;		// �׽�Ʈ ���̽� ����. 0<T<80;���ڿ�.
	int score=0, cont=1;	// �׽�Ʈ���̽��� ����, ���ӵ�O����
	cin >> T;
	while (T--) {
		char *testCase = new char[81];
		cin >> testCase;
		for (int i = 0; testCase[i] != '\0'; i++) {
			if (testCase[i] == 'O') {
				score += cont;
				cont++;
			}
			else if (testCase[i] == 'X') {
				cont = 1;
			}
			else return -1;	// ����.
		}
		cout << score << '\n';
		score = 0; cont = 1;	// �� �׽�Ʈ ���̽��� ���� ��� ��ģ �� �ʱ�ȭ.
	}
	return 0;
}