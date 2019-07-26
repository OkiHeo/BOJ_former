/*
����

C major scale consists of 8 tones: c d e f g a b C. For this task we number the notes using numbers 1 through 8. The scale can be played ascending, from 1 to 8, descending, from 8 to 1, or mixed. Write a program that, given the sequence of notes, determines wether the scale was played ascending, descending or mixed.
�Է�

First and only line of input will contain 8 integers, from 1 to 8 inclusive. Each integer will appear exactley once in the input.
���

In the first and only line of input print "descending" if the scale was played descending, "ascending" if the scale was played ascending and "mixed" if the scale was played mixed.
*/
/*
����

�������� c d e f g a b C, �� 8�� ������ �̷�����ִ�. �� �������� 8�� ���� ������ ���� ���ڷ� �ٲپ� ǥ���Ѵ�. c�� 1��, d�� 2��, ..., C�� 8�� �ٲ۴�.

1���� 8���� ���ʴ�� �����Ѵٸ� ascending, 8���� 1���� ���ʴ�� �����Ѵٸ� descending, �� �� �ƴ϶�� mixed �̴�.

������ ������ �־����� ��, �̰��� ascending����, descending����, �ƴϸ� mixed���� �Ǻ��ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�

ù° �ٿ� 8�� ���ڰ� �־�����. �� ���ڴ� ���� ������ ������ ���̸�, 1���� 8���� ���ڰ� �� ���� �����Ѵ�.
���

ù° �ٿ� ascending, descending, mixed �� �ϳ��� ����Ѵ�.
*/
#include <iostream>
using namespace std;

int main(void)
{
	int tone[8];	// �迭�� 1~8�� ���ڸ� �����Ѵ�.
	int mix=0;		// mixed����!
	bool ascending;	// ��������,�������� �Ǻ�
	for (int i = 0; i < 8; i++) {
		while (true) {
			cin >> tone[i];
			if (tone[i] >= 1 && tone[i] <= 8) break;
		}
	}
	if (tone[0] < tone[1]) {
		ascending = true;
	}
	else ascending = false;
	for (int i = 1; i < 7; i++) {
		if (tone[i] < tone[i + 1])
		{
			if (ascending == false) {
				mix++;
			}
			ascending = true;
		}
		else {
			if (ascending == true) {
				mix++;
			}
			ascending = false;
		}
	}
	if (mix == 0) {
		if (ascending) {
			cout << "ascending";
		}
		else {
			cout << "descending";
		}
	}
	else
		cout << "mixed";
		return 0;
}
/*
	if������ �ʱ� ������ �����Ѵٸ� else������ �ݴ� ����� ���ǵ� ����������Ѵ�!! ���� ����
*/