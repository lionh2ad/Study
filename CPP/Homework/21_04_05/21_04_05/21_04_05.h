#include<iostream>
using std::cin; using std::cout; using std::endl;

class Solution {
private:
    int i = 0;
    int j = 0;
    int length=0;
    int count = 0;
public:
    void Set_count();
    void Run();
    void Input(int arr[]);
    void Bubble_sort(int arr[]);
    void Show_nums(int arr[]);
};

/*
Day : 21.04.05
@Quest
사용자에게 배열의 크기와 데이터를 입력받아 
버블 정렬을 시켜보시오.

@Input:
4
62 23 32 15

@Output:
23 32 15 62
23 15 32 62
15 23 32 62

Bubble sort란?
두 인접한 원소를 검사하여 자리를 바꾸는 과정을 반복하며 
정렬하는 방법이다.

다음과 같은 과정으로 정렬을 한다.
1. 첫번째 값과 두번째 값을 비교하여 
   첫번째 값이 크면 자리를 바꾼다.
2. 두번째 값과 세번째 값을 비교하여 
   두번째 값이 크면 자리를 바꾼다.
3. 위와 같이 반복하여 N-1번째 값과 N번째 값을 비교하여 
   N-1번째 값이 크면 자리를 바꾼다.

   이 단계가 끝나면 N번째에 가장 큰 수가 자리하게 된다. 
   (한단계완료)

4. N번째를 제외하고 1~3을 반복하면 
   N-1번째에 두 번째로 큰수가 자리한다. 
   (2단계 완료)

5. 위와같은 작업을 N-1번 반복하면 
   모든 데이터가 순서대로 정렬된다.

예를 들어 수열 {62, 23, 32, 15} 가 있을 때 
아래와 같은 과정으로 정렬이 된다.

Level 1.
62 23 32 15
C
23 62 32 15
C
23 32 62 15
C
23 32 15 62
C

Level 2.
23 32 15 62
C
23 32 15 62
C
23 15 32 62
C

Level 3.
23 15 32 62
C
15 23 32 62
C
*/