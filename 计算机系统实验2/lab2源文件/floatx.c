#include <stdio.h>
int main()
{
	int i;
	float zheng0, fu0, minfudian, maxfudian, guifudian, wuqiong, feishu;
	char* z;
	z = (char*)& zheng0;
	*z = 0b00000000;
	*(z + 1) = 0b00000000;
	*(z + 2) = 0b00000000;
	*(z + 3) = 0b00000000;
	printf("��0  %f",zheng0);
	printf("\n");

	z = (char*)& fu0;
	*z = 0b00000000;
	*(z + 1) = 0b00000000;
	*(z + 2) = 0b00000000;
	*(z + 3) = 0b10000000;
	printf("��0  %f",fu0);
	printf("\n");

	z = (char*)& minfudian;
	*z = 0b00000001;
	*(z + 1) = 0b00000000;
	*(z + 2) = 0b00000000;
	*(z + 3) = 0b00000000;
	printf("��С��������  %.46f",minfudian);
	printf("\n");

	z = (char*)& maxfudian;
	*z = 0b11111111;
	*(z + 1) = 0b11111111;
	*(z + 2) = 0b01111111;
	*(z + 3) = 0b01111111;
	printf("��󸡵�����  %f",maxfudian);
	printf("\n");


	z = (char*)& guifudian;
	*z = 0b00000001;
	*(z + 1) = 0b00000000;
	*(z + 2) = 0b10000000;
	*(z + 3) = 0b00000000;
	printf("��С���淶������  %.39f",guifudian);
	printf("\n");


	z = (char*)& wuqiong;
	*z = 0b00000000;
	*(z + 1) = 0b00000000;
	*(z + 2) = 0b10000000;
	*(z + 3) = 0b01111111;
	printf("�������  %f",wuqiong);
	printf("\n");


	z = (char*)& feishu;
	*z = 0b00000000;
	*(z + 1) = 0b00000000;
	*(z + 2) = 0b11100101;
	*(z + 3) = 0b01111111;
	printf("nan  %f",feishu);
	printf("\n");
}
