#include<iostream>
#include<cstdlib>

class Solution {
private:
	int i = 0;
	int j = 0;
	int strike = 0;
	int ball = 0;
	int arrAnswer[3] = {0,};

public:
	Solution() {
		for (i=0;i<3;i++) {
			arrAnswer[i] = rand() % 10;
		}
	}
	void run();
	void inputNumber(int arrUser[]);
	void checkNumber(int arrUser[]);
	void showResult();
};
//입력시 예외 처리와 문제의 5번 추가
/*
Day : 21.05.18
* Quest
1. 클래스는 생성 되며 정답을 생성한다.
2. 사용자에게 숫자 세개를 입력 받는다.
3. 정답과 한자리씩 데이터를 비교한다.
4. 정답일 경우 출력 오답일 경우 사용자 입력 값 대기
5. 정답 출력 시 정답 입력 횟수 출력

* 정답
0~9까지 세자리의 수를 랜덤으로 배치한다.
중복 가능
ex) answer = 012

베이스볼 규칙 :
* 자리와 숫자가 맞는 다면 스트라이크
* 자리는 다르지만 숫자가 다르다면 볼
* 정답이 없다면 아웃

ex)
ANSWER : 123

사용자 : 456
관리자 : OUT

사용자 : 126
관리자 : 2 STRIKE

사용자 : 356
관리자 : 1 BALL

사용자 : 136
관리자 : 1 STRKIE 1BALL

사용자: 123
관리자: 3 STRIKE
*/