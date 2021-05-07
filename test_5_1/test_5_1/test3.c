#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar())!= EOF)
	{
		putchar(ch);
	}
	return 0;
}



//int main(){
//	int ch = getchar();
//	putchar(ch);
//	printf("%c\n",ch);
//	return 0;
//}

//int main(){
//	int i = 1;
//	while (i <= 10){
//		if (i == 5)
//			continue;
//		printf(" %d", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//   {
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:

//		m++;//3
//	case 2:
//		n++;//2
//	case 3:
//		switch (n){
//		case 1:n++;//²»Ö´ÐÐ
//		case 2:m++; n++; break;//4,3
//		}
//	case 4:m++;//5
//		break;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d\n", m, n);
//	return 0;
//    }



	/*int day = 0;
	int n = 1;
	scanf("%d",&day);
	switch (day)
	{
	case 1:
		if (n == 1)
			printf("hehe\n");
	case 2:
	case 3:
	case 4:
	case 5:
		printf("weekday\n");
		break;
	case 6:
	case 7:
		printf("weekend\n");
		break;
	default:
		printf("ÊäÈë´íÎó\n");
		break;*/
	//}
	/*int i = 1;
	while (i <= 100){
		if (i % 2 == 1)
			printf(" %d" , i);
		i += 2;
	}*/
	/*int num = 4;
	if (num == 5){
		printf("ºÇºÇ\n");
	}*/
	/*int a = 0;
	int b = 2;
	if (a == 1)
	if (b == 2)
		printf("hehe\n");
	else
		printf("haha\n");*/
	/*return 0;
}*/