#include<stdio.h>

#include<stdlib.h>

int main (void)

{

	int a, b, c,x;

	printf("�п�J���:");

	scanf("%d",&x);

	a = x / 3600;

	b = x % 3600 / 60;

	c = x % 3600 % 60;

	printf("%d��%d��%d��", a,b,c);



	system("pause");

	return 0;

    }
