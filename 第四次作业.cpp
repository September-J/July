#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, c, i, max = 0, min;
	printf("请输入两个整数：\n");
	scanf("%d %d", &a, &b);
	min = a < b ? a : b;
	for (i = 2; i <= min; i++){
		if (a % i == 0 && b % i == 0){
			max = i;
		}
}
	if (max == 0){
		printf("两个数互质\n");
	}
	else{
		printf("最大公约数是：%d\n", max);
	}
	while (int c = a % b){
		a = b;
		b = c;
	}
	if (b == 1){
		printf("两个数互质\n");
	}
	else{
		printf("最大公约数是:%d\n",b);
	}
	system("pause");
	return 0;		
}
