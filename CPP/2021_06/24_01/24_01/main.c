#include"24_01.h"

void main() {
	//Lion dragon;
	//memset(&dragon,NULL,sizeof(Lion));

	//Lion dragon;
	//Lion dragon[3];
	int count = 0, i=0;
	Lion *dragon; //����ڰ� ���ϴ� ũ�⸸ŭ Lion �����ֱ� �ʱ�ȭ ����
	printf("���ϴ� ũ�⸦ �Է� �Ͻÿ�.");
	scanf("%d",&count);
	dragon = (Lion*)malloc(sizeof(Lion) * count);
	memset(dragon,0,sizeof(Lion));
	for (i=0;i<count;i++) {
		printf("%d", dragon[i].x_point);
	}
	
	
	//char dasf[40];
	//(*(dasf+5));
	

}