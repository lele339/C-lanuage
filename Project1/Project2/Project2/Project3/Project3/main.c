#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "main.h"
int main()
{
	//1、编程判断：有数字1、2、3、4四个数字，能组成多少个各个位不相同的三位数，并将其输出
	/*int sum, num = 0,cnt=0;
	for(int i=1;i<=4;i++)
	{
		for (int j = 1; j<=4; j++)
		{
			for (int k = 1; k<=4; k++)
			{
				  if(i!=j && j!=k && k!=i){
				num = 100 * i + 10 * j + k;
				printf("%d\n", num);
				if (num >= 100 && num <= 1000)
					cnt++;}
			}
		}
	}
	printf(" 有%d个各个位不相同的三位数", cnt);*/

	//1、编写程序打印斐波拉契数列（1  1  2  3  5  8  13……）的前n项。(5分)
//	int n;
//	scanf_s("%d", &n);
//for(int i=1;i<=n;i++)
//	printf("%d ", Fabi(i));

	//2、输入任意的8个数据，使用冒泡排序法进行递增排序。(10分)
	//int a[8] = { 1,2,3,4,5,78,56,9 };
	//Bubble(a, 8);
	//for (int i = 0; i < 8; i++) {
	//	printf("%d ", a[i]);
	//}



//3、韩信点兵:相传韩信才智过人，从不直接清点自己军队的人数，只要让士兵先后以三人一排、五人一排、七人一排地变换队形，而他每次只掠一眼队伍的排尾就知道总人数了。请输入3个非负整数a, b, c ，表示每种队形排尾的人数（a < 3, b < 5, c < 7），输出总人数的最小值（或报告无解）。已知总人数不小于10，不超过100。(10分)
	//int a, b, c, totalP=0;


//4、编写一个程序实现求一个正整数的阶乘，如果超过12，输出超过计算范围；如果在1~12之间，则计算出其阶乘并输出。(10分)
	//int n, jc = 0;
	//scanf_s("%d", &n);
	//if (n > 12) printf("超过计算范围");
	//else printf("%d", jiecheng(n));

	//	5、编写程序将字符串”124556”转换成数字124556
	/*char a[] = "12A3 4567";
	for (int i = 0; a[i]; i++)
	{
		printf("%d", a[i] - '0');

	}*/

	//8.4.2 重新实现字符串相关函数
	//	strlen();
	//char a[10] = "ersyujd";
	//int len = rewrite_strle(a);
	//printf("%d", len);


	//strcpy();
	/*char a[20] = {0}, b[20] = "qwertp", c[20] = {0}, d[20] = "abcdef";
	printf("%s\n%s",rewriter_strcpy(a, b),strcpy(c,d));*/
	//memcpy();

	//char src1[] = "Hello, World!";
	//char dest1[20];
	//rewriter_memcpy(dest1, src1, strlen(src1) + 1); // +1 包含 '\0'
	//printf("字符串: %s\n", dest1);

	//4.	strcat();
	/*char src1[50] = "Hello, World!";
	char dest1[20]="qwetyuks";
	printf("%s", rewriter_strcat(src1, dest1));*/
	//5.	strcmp();
	char str1[50] = "qwetyuks";
	char str2[20]="qwetyuks";
	
	printf("%d",rewriter_strcmp(str1, str2));
	//8.	strstr();

	/*有一个3×4的矩阵，要求输出其鞍点（行列均最大的值）以及它的行号和列号。
		int a[3][4] = {
			   {123, 94, -10, 218},
			   {3,  9,   10, -83},
			   {45, 16,  44, -99}
	}；*/
	//int a[3][4] = { {123, 94, -10, 218}, {3, 9, 10, -83}, {45, 16, 44, -99 } };
	//int max = a[0][0],h,l;
	//for ( int i = 0; i < 3; i++)
	//{
	//	for (int  j =0 ; j < 4; j++)
	//	{
	//		if (a[i][j] > max)
	//			max = a[i][j];
	//		h = i;
	//		l = j;
	//	}
	//}
	//printf("%d\n%d\n%d", max, h,l);
	//return 0;


	//4. 写一个函数，统计一个int类型的值中有多少位为1
	/*int a;
	scanf_s("%d", &a);
	printf("%d",getOne(a) );
	return 0;*/


	//5. 有一个字符串，找出重复次数最多的那个字符，比如"abccccdddee"中的字符'c'.


	return 0;
}	




