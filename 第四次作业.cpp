#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, c, i, max = 0, min;
	printf("����������������\n");
	scanf("%d %d", &a, &b);
	min = a < b ? a : b;
	for (i = 2; i <= min; i++){
		if (a % i == 0 && b % i == 0){
			max = i;
		}
}
	if (max == 0){
		printf("����������\n");
	}
	else{
		printf("���Լ���ǣ�%d\n", max);
	}
	while (int c = a % b){
		a = b;
		b = c;
	}
	if (b == 1){
		printf("����������\n");
	}
	else{
		printf("���Լ����:%d\n",b);
	}
	system("pause");
	return 0;		
}
