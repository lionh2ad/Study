#include"Kbhit.h"

int main() {
    int key;

    Display_main();
    while (1) {
        if (kbhit()) {               // 1. Ű���� ������ �� if���� ����ȴ�.
            key = getch();           // 2. ����Ű�� �Է��� �� 224 00 �� ���ۿ� �ִ�. 
            if (key == 224 || key == 0) {   // 3. ����Ű �Է½� ó������ 224�� ��ȯ �ȴ�.
                key = getch();        // 4. 224���Ŀ��� 00�� ��ȯ�Ǿ� ����Ű�� �ƽ�Ű�ڵ� ���� ���� ���������� �����δ�.
                switch (key) {
                    case LEFT:
                         printf("�·� �̵�\n");
                        break;
                    case RIGHT:
                          printf("��� �̵�\n");
                        break;
                    case UP:
                         printf("���� �̵�\n");
                        break;
                    case DOWN:
                         printf("�Ʒ��� �̵�\n");
                        break;
                }
            }
            else if(key == 'q'){
                    printf("����");
                  break;
            }
        }
    }
    return 0;
}

void Display_main() {
    printf("����Ű�� �Է� �Ͻÿ�. \n");
    printf("'q'�� �Է� �ϸ� ���� \n");
}