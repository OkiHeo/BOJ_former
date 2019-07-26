/*
문제

C major scale consists of 8 tones: c d e f g a b C. For this task we number the notes using numbers 1 through 8. The scale can be played ascending, from 1 to 8, descending, from 8 to 1, or mixed. Write a program that, given the sequence of notes, determines wether the scale was played ascending, descending or mixed.
입력

First and only line of input will contain 8 integers, from 1 to 8 inclusive. Each integer will appear exactley once in the input.
출력

In the first and only line of input print "descending" if the scale was played descending, "ascending" if the scale was played ascending and "mixed" if the scale was played mixed.
*/
/*
문제

다장조는 c d e f g a b C, 총 8개 음으로 이루어져있다. 이 문제에서 8개 음은 다음과 같이 숫자로 바꾸어 표현한다. c는 1로, d는 2로, ..., C를 8로 바꾼다.

1부터 8까지 차례대로 연주한다면 ascending, 8부터 1까지 차례대로 연주한다면 descending, 둘 다 아니라면 mixed 이다.

연주한 순서가 주어졌을 때, 이것이 ascending인지, descending인지, 아니면 mixed인지 판별하는 프로그램을 작성하시오.
입력

첫째 줄에 8개 숫자가 주어진다. 이 숫자는 문제 설명에서 설명한 음이며, 1부터 8까지 숫자가 한 번씩 등장한다.
출력

첫째 줄에 ascending, descending, mixed 중 하나를 출력한다.
*/
#include <iostream>
using namespace std;

int main(void)
{
	int tone[8];	// 배열에 1~8의 숫자를 저장한다.
	int mix=0;		// mixed인지!
	bool ascending;	// 오름차순,내림차순 판별
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
	if문에서 초기 조건을 설정한다면 else문에서 반대 경우의 조건도 설정해줘야한다!! 잊지 말자
*/