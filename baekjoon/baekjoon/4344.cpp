/*
����

It is said that 90% of frosh expect to be above average in their class. You are to provide a reality check.
�Է�

The first line of standard input contains an integer C, the number of test cases. C data sets follow. Each data set begins with an integer, N, the number of people in the class (1 <= N <= 1000). N integers follow, separated by spaces, each giving the final grade (an integer between 0 and 100) of a student in the class. 
���

For each case you are to output a line giving the percentage of students whose grade is above average, rounded to 3 decimal places.
*/
/*
����

���л� ��������� 90%�� �ڽ��� �ݿ��� ����� �Ѵ´ٰ� �����Ѵ�. ����� �׵鿡�� ���� ������ �˷���� �Ѵ�.
�Է�

ù° �ٿ��� �׽�Ʈ ���̽��� ���� C�� �־�����.

��° �ٺ��� �� �׽�Ʈ ���̽����� �л��� �� N(1 �� N �� 1000, N�� ����)�� ù ���� �־�����, �̾ N���� ������ �־�����. ������ 0���� ũ�ų� ����, 100���� �۰ų� ���� �����̴�.
���

�� ���̽����� �� �پ� ����� �Ѵ� �л����� ������ �ݿø��Ͽ� �Ҽ��� ��° �ڸ����� ����Ѵ�.
*/
#include <iostream>
using namespace std;
int main(void)
{
	int C;	// �׽�Ʈ ���̽� ����
	cin >> C;
	while (C--) {
		int N;	// �� �� ��� �� 1<=N<=1000
		int *grade;
		int sum = 0;	//���� �հ�
		double avg = 0.0;	//���� ���
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
	cout �Ҽ��� �ڸ��� ����.
	cout<<fixed;	// �Ҽ��� �������� ǥ���ϰڴ�.
	cout.precision(3);	// �Ҽ��� �Ʒ� 3�ڸ����� ǥ��(���� �ݿø�)

	cout<<fixed;�� cout.setf(ios::fixed); �� ����ص� ����,
	�����ϱ� ���ؼ��� cout.unsetf(ios::fixed); �ϸ� �ȴ�.
*/