/*
문제

There is an objective test result such as “OOXXOXXOOO”. An ‘O’ means a correct answer of a problem and an ‘X’ means a wrong answer. The score of each problem of this test is calculated by itself and its just previous consecutive ‘O’s only when the answer is correct. For example, the score of the 10th problem is 3 that is obtained by itself and its two previous consecutive ‘O’s. 

Therefore, the score of “OOXXOXXOOO” is 10 which is calculated by “1+2+0+0+1+0+0+1+2+3”. 

You are to write a program calculating the scores of test results. 
입력

Your program is to read from standard input. The input consists of T test cases. The number of test cases T is given in the first line of the input. Each test case starts with a line containing a string composed by ‘O’ and ‘X’ and the length of the string is more than 0 and less than 80. There is no spaces between ‘O’ and ‘X’. 
출력

Your program is to write to standard output. Print exactly one line for each test case. The line is to contain the score of the test case. 
*/
/*
문제

"OOXXOXXOOO"와 같은 OX퀴즈의 결과가 있다. O는 문제를 맞은 것이고, X는 문제를 틀린 것이다. 문제를 맞은 경우 그 문제의 점수는 그 문제까지 연속된 O의 개수가 된다. 예를 들어, 10번 문제의 점수는 3이 된다.

"OOXXOXXOOO"의 점수는 1+2+0+0+1+0+0+1+2+3 = 10점이다.

OX퀴즈의 결과가 주어졌을 때, 점수를 구하는 프로그램을 작성하시오.
입력

첫째 줄에 테스트 케이스의 개수가 주어진다. 각 테스트 케이스는 한 줄로 이루어져 있고, 길이가 0보다 크고 80보다 작은 문자열이 주어진다. 문자열은 O와 X만으로 이루어져 있다.
출력

각 테스트 케이스마다 점수를 출력한다.
*/
#include <iostream>
#include <cstring>
using namespace std;
int main(void)
{
	int T;		// 테스트 케이스 개수. 0<T<80;문자열.
	int score=0, cont=1;	// 테스트케이스별 점수, 연속된O개수
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
			else return -1;	// 오류.
		}
		cout << score << '\n';
		score = 0; cont = 1;	// 한 테스트 케이스에 대해 계산 마친 후 초기화.
	}
	return 0;
}