#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "main.h"
int main()
{
	/*qiutianshu(1, 5);*/

	/*int s;
	s = judgeLeap(2000);
	if (s == 1) printf("是瑞年");
	else printf("是平年");*/


	/*int s;
	s = judgeangle(3, 4, 5);
	switch (s) {
	case 0:printf("不能构成三角形"); break;
	case 1:printf("构成的三角形类型为锐角三角形"); break;
	case 2:printf("构成的三角形类型为直角三角形"); break;
	case 3:printf("构成的三角形类型为等腰直角三角形"); break;
	case 4:printf("构成的三角形类型为钝角三角形"); break;
	case 5:printf("构成的三角形类型为等腰三角形"); break;
	case 6:printf("构成的三角形类型为等边三角形"); break;

	default:break;
	}
	*/


	//for ( int i = 1; i < 21; i++) {
	//	printf("%d\n", Fibonacci(i));
	//}
	/*printf("%d", Fibonacci(6));*/
	/*printf("%d", jiecheng(4));*/
	/*printf("%d", climbti(10));*/
	//走台阶一次一个或者两个



	/*int y1, m1, d1, y2, m2, d2;

	printf("输入第一个日期 (年 月 日): ");
	scanf("%d %d %d", &y1, &m1, &d1);

	printf("输入第二个日期 (年 月 日): ");
	scanf("%d %d %d", &y2, &m2, &d2);

	int result = daysBetween(y1, m1, d1, y2, m2, d2);
	printf("天数差: %d 天\n", result);*/
	


	/*int n,cnt=0;
	scanf("%d", &n);*/
	/*int i=gettwocnt(10);
	printf("有%d个2",i);
	return 0;*/


	/*int tot = getday(2025, 5,1 );
	printf("%d", tot);*/

	/*int a[5] = { 1,2,3,4,5 };
	float ave = getGve(a, 5);
	printf("%lf\n", ave);
	int max = maxnum(a, 5);
	int min = minnum(a, 5);
	printf("%d\n%d", max, min);*/

	//int  score[10] = { 94, 91, 92, 93,97, 100, 95, 96, 80, 90 };

	//Bubble_sort(score, 10);
	//int a[8];
	//	float sum=0;
	//for (int i = 0; i < 8; i++) {
	//	a[i] = score[i+1];
	//	sum += a[i];
	//}

	//printf("%lf", sum/8.0);

	//int i = 5;
	//char a[20] = "341324199012245318";
	//char year[5] = {0};
	//char month[3] = {0};
	//char day[2] = { 0 };
	//strncpy(year, a + 6, 4);
	//strncpy(month, a + 10, 2);
	//strncpy(day, a + 12, 2);
	//printf("出生日期为%d年%d月%d日\n年龄为%d", atoi(year), atoi(month), atoi(day), 2025 - atoi(year));
	// 
	//char a[20] ;
	//fgets(a, 18, stdin);
	//char year[5] = { 0 };
	//char month[3] = { 0 };
	//char day[3] = { 0 };
	//strncpy(year, a + 6, 4);
	//strncpy(month, a + 10, 2);
	//strncpy(day, a + 12, 2);
	//printf("今年%d岁，出生日期为%s.%s.%s", 2025 - atoi(year), year, month, day);
	//return 0;
	/*通常，用手机扫描其他的已经联网的手机WLAN分享网络页面的二维码，可以出现如下联网信息
		“WIFI : T:WPA; PASSWORD:xydeduw2; SSID:XYD - W_5G; H:false; ” 之后手机可以通过解析这个字符串然后控制WIFI模块连接相应的路由器。
		设计一个程序，输入一串联网信息的字符串，输出该信息的中SSID和PASSWORD。*/
		//char wifi[100] = "WIFI:T:WPA; PASSWORD:xydeduw2;SSID:XYD - W_5G;H:false;";
		//char ssid[20] = "SSID";
		//char pwd[20] = "PASSWORD";
		//char s[20] = { 0 }, p[20] = {0};
		//if(strstr(wifi, ssid)!=0 && strstr(wifi, pwd)!=0){
		///*char* ss = strstr(wifi, ssid);
		//char* pw = strstr(wifi, ssid);*/
		//strncpy(s, strstr(wifi, ssid) + 5, 10);
		//strncpy(p, strstr(wifi, pwd) + 9, 8);
		//printf("PASSWORD:%s\nSSID:%s", p, s);
		//return 0;
		//}
	   
		/*示例：查询在一个字符串中，指定字符的出现次数
			char a[100] = "qwertymmmmmuytrewq  asdfghjmmmmmmgfdsazxcvbnmmnbvcxzmmgfdsd";
		查询‘m’出现的次数*/

        /* char a[100] = "qwertymmmmmuytrewq  asdfghjmmmmmmgfdsazxcvbnmmnbvcxzmmgfdsd";
		 int cnt = 0;
		 for (int i = 0; i < 100; i++) {
			 if (a[i] == 'm') cnt++;
		 }
		 printf("%d", cnt);*/

//        void mSum(char* p);
//        char a[100] = "qwertymmmmmuytrewq  asdfghjmmmmmmgfdsazxcvbnmmnbvcxzmmgfdsd";
//		mSum(a);
//		
//		return 0;
//}
//   void mSum(char* p) {
//	//查询每一个字符
//	int cnt = 0;
//	for (int i = 0; p[i]; i++)
//	{
//		if (p[i] == 'm') cnt++;
//	}
//	printf("%d", cnt);

	int arr[] = { 10, 20, 30 };
	int* p = arr;  // 初始状态：p指向arr[0]（值10）
	int a, b, c, d;

	// 1. 执行 int a = *p++;
	a = *p++;
	printf("1. 执行 *p++ 后：\n");
	printf("a = %d（取p指向的值后，p后移）\n", a);
	printf("当前p指向的值：%d（p已指向arr[1]）\n", *p);
	printf("数组当前值：%d, %d, %d（数组未被修改）\n\n", arr[0], arr[1], arr[2]);

	// 2. 执行 int b = (*p)++;
	b = (*p)++;
	printf("2. 执行 (*p)++ 后：\n");
	printf("b = %d（取p指向的值后，该值自增）\n", b);
	printf("当前p指向的值：%d（arr[1]已从20变成21）\n", *p);
	printf("数组当前值：%d, %d, %d（arr[1]被修改）\n\n", arr[0], arr[1], arr[2]);

	// 3. 执行 int c = ++*p;
	c = ++ * p;
	printf("3. 执行 ++*p 后：\n");
	printf("c = %d（该值先自增，再取值）\n", c);
	printf("当前p指向的值：%d（arr[1]从21变成22）\n", *p);
	printf("数组当前值：%d, %d, %d（arr[1]再次被修改）\n\n", arr[0], arr[1], arr[2]);

	// 4. 执行 int d = *(++p);
	d = *(++p);
	printf("4. 执行 *(++p) 后：\n");
	printf("d = %d（p先移到下一位，再取值）\n", d);
	printf("当前p指向的值：%d（p已指向arr[2]）\n", *p);
	printf("数组当前值：%d, %d, %d（数组未被修改）\n", arr[0], arr[1], arr[2]);

	return 0;

}