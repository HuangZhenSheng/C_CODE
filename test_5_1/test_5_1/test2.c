#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct Book{
	char name[20];
	short price;
};
int main()
{
	struct Book b1 = {"C语言程序设计",55};
	strcpy(b1.name,"C++");//strcpy--string copy-字符串拷贝--库函数-string.h
	printf("%s\n",b1.name);
	 
	/*struct Book* pb = &b1;
	printf("%s\n",pb->name);
	printf("%d\n", pb->price);*/


	/*printf("%s\n",(*pb).name);
	printf("%d\n", (*pb).price);*/

	/*printf("书名：%s\n",b1.name);
	printf("价格:%d元\n",b1.price);
	b1.price = 15;
	printf("修改后的价格：%d元\n",b1.price);*/
	return 0;
}
//#include<string.h>
//int main(){
//	double d = 3.14;
//	double* pd = &d;
//	*pd = 5.5;
//	printf("%lf\n",&d);
//	printf("%lf\n", *pd);
	/*int a = 10;
	printf("%p\n",&a);*/
	//int a = 10;
	//int*  p = &a;//有一种变量是用来存放地址的
	//printf("%p\n",&a);
	//printf("%p\n", p);
	//*p = 20;//解引用操作符
	//printf("a = %d\n", a);
	//return 0;
	/*char ch = "w";
	char* pc = &ch;
	printf("%d\n", sizeof(pc));
	*pc = 'q';
	printf("%c\n", ch);
	return 0;*/

//int Max(int x, int y){
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//void test(){
//	static int a = 1;
//	a++;
//	printf("a=%d\n",a);
//}
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n",sum);
	/*extern int g_rval;
	printf("g_rval=%d\n", g_rval);*/
	/*int i = 0;
	while (i < 5){
		test();
		i++;
	}*/
	//return 0;
	/*int a = 0;
	int b = ~a;
	printf("%d\n",b);*/
	//int arr[] = {1,2,3,4,5,6};
	//printf("%p\n", &a);
	//int* p = &a;
	//return 0;
	/*printf("%d\n", sizeof a);
	printf("%d\n",sizeof(arr));
	printf("%d\n",sizeof(arr)/sizeof(arr[0]));
	return 0;*/


	/*int num1 = 10;
	int num2 = 20;
	int max = 0;
	max = Max(num1, num2);
	printf("max = %d\n",max);
	return 0;*/
//}