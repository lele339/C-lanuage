#include "digui.h"
//int Fibonacci(int n) {
//	/* 实现程序逻辑*/
//	if (n < 3) return 1;
//	else
//	{
//		//第n项的值为第n-1项加第n-2项
//		// 如果有printf则在加include.h 头文件;
//		return Fibonacci(n - 1) + Fibonacci(n - 2);
//	}
//} 
//int jiecheng(int n) {
//	if (n <= 1) return 1;
//	else return n * jiecheng(n - 1);
//}
int climbti(int n) {
	if (n <=2) return n;
	else return climbti(n - 1) + climbti(n - 2);
}
