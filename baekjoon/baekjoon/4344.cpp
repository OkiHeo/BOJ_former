/*
문제

It is said that 90% of frosh expect to be above average in their class. You are to provide a reality check.
입력

The first line of standard input contains an integer C, the number of test cases. C data sets follow. Each data set begins with an integer, N, the number of people in the class (1 <= N <= 1000). N integers follow, separated by spaces, each giving the final grade (an integer between 0 and 100) of a student in the class. 
출력

For each case you are to output a line giving the percentage of students whose grade is above average, rounded to 3 decimal places.
*/
/*
문제

대학생 새내기들의 90%는 자신이 반에서 평균은 넘는다고 생각한다. 당신은 그들에게 슬픈 진실을 알려줘야 한다.
입력

첫째 줄에는 테스트 케이스의 개수 C가 주어진다.

둘째 줄부터 각 테스트 케이스마다 학생의 수 N(1 ≤ N ≤ 1000, N은 정수)이 첫 수로 주어지고, 이어서 N명의 점수가 주어진다. 점수는 0보다 크거나 같고, 100보다 작거나 같은 정수이다.
출력

각 케이스마다 한 줄씩 평균을 넘는 학생들의 비율을 반올림하여 소수점 셋째 자리까지 출력한다.
*/
#include <iostream>
using namespace std;
int main(void)
{
	int C;	// 테스트 케이스 개수
	cin >> C;
	while (C--) {
		int N;	// 한 반 사람 수 1<=N<=1000
		int *grade;
		int sum = 0;	//점수 합계
		double avg = 0.0;	//점수 평균
		double overAvg = 0;
		while (true) {
			cin >> N;
			if (1 <= N && N <= 1000) break;
		}
		grade = new int[N];
		for(int i=0; i<N; i++)
		{
			while (true) {
				cin >> grade[i];
				if (0 <= grade[i] && grade[i] <= 100) {
					sum += grade[i];
					break;
				}
			}
		}
		avg = sum / N;
		for (int i = 0; i < N; i++) {
			if (grade[i] > avg)
				overAvg++;
		}
		cout << fixed;
		cout.precision(3);
		cout << (overAvg / N)*100<<'%'<< '\n';
	}
	return 0;
}
/*
	cout 소수점 자리수 조절.
	cout<<fixed;	// 소수점 고정시켜 표현하겠다.
	cout.precision(3);	// 소수점 아래 3자리까지 표현(이하 반올림)

	cout<<fixed;는 cout.setf(ios::fixed); 로 사용해도 같고,
	해제하기 위해서는 cout.unsetf(ios::fixed); 하면 된다.
*/