#include"Parking_lot.h"


typedef struct Parking {
    CAR* car;
}Parking;

typedef struct Point
{
    int x;
    int y;
}POINT;

typedef struct Car
{
    int numb;
    char type[20];
    POINT* point;
    STIME* stime;
}CAR;

typedef struct Stime
{
    int h;
    int m;
    int s;
}STIME;

void Howmany_POINT(int* row, int* col) {
    int user_row = 0, user_col = 0;
    printf("������ ������ ���̸� �Է� �ϼ���");
    scanf("%d", &user_row);
    *row = user_row;
    
    printf("������ ������ ���̸� �Է� �ϼ���");
    scanf("%d", &user_col);
    *col = user_col;
}

void run() {
    int row = 0, col = 0;
    int i_row = 0, i_col = 0;

    Howmany_POINT(&row, &col);
    Parking** Parking_lot = (int**)malloc(sizeof(int**)* row);
    for (i_row=0;i_row<row;i_row++) {
        Parking_lot[i_row] = (int*)malloc(sizeof(int*) * col);
    }
    
}

void display() {
    printf("���� ���� ���α׷�");
}

void main() {
    display();
    run();
}
