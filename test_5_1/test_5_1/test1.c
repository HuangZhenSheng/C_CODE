#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int Add(int x, int y){
//	int z = x + y;
//	return z;
//}
int Max(int x, int y){
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	/*int line = 0;
	printf("�������\n");
	while (line < 200){
		printf("��һ�д���:%d\n",line);
		line++;
	}if (line>=200)
	printf("��offer\n");
	return 0;*/
	/*int num1 = 10;
	int num2 = 20;
	int sum = 0;
	int a = 100;
	int b = 200;
	sum = Add(num1, num2);
	sum = Add(a, b);
	printf("sum = %d\n", sum);*/
	/*int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	while (i < 10){
		printf("%d ", arr[i]);
		i++;
	}*/
	/*int a = 1;
	int b = a << 3;
	printf("%d\n", b);
	printf("%d\n", a);*/
	/*int a = 3;
	int b = 5;
	int c = a&b;
	printf("%d\n", c);*/
	/*int arr[10] = { 0 };
	int sz = 0;
	printf("%d\n", sizeof(arr));
	sz = sizeof(arr) / sizeof(arr[0]);
		printf("%d\n", sz);*/
	/*char input[10] = { 0 };
	system("shutdown -s -t 60");
	again:
	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
	scanf("%s",input);
	if (strcmp(input,"������")==0){
		system("shutdown -a");
	}
	else{
		goto again;
	}*/
	
	int num1 = 10;
	int num2 = 20;
	int max = 0;
	max = Max(num1, num2);
	printf("max = %d\n",max);
	/*if (num1 > num2){
		printf("�ϴ�ֵ�ǣ�%d\n", num1);
	}
	else{
		printf("�ϴ�ֵ�ǣ�%d\n", num2);
	}*/
		return 0;

}