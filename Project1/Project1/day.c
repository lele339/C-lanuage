#include "day.h"

//int isLeap(int year) {
//    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
//}
//
//// 计算日期是该年的第几天
//int dayOfYear(int y, int m, int d) {
//    int month[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//    if (isLeap(y)) month[1] = 29;
//
//    int days = 0;
//    for (int i = 0; i < m - 1; i++)
//        days += month[i];
//    return days + d;
//}
//
//// 计算两个日期之间的天数
//int daysBetween(int y1, int m1, int d1, int y2, int m2, int d2) {
//    // 确保第一个日期更早
//    if (y1 > y2 || (y1 == y2 && m1 > m2) || (y1 == y2 && m1 == m2 && d1 > d2)) {
//        int t = y1; y1 = y2; y2 = t;
//        t = m1; m1 = m2; m2 = t;
//        t = d1; d1 = d2; d2 = t;
//    }
//  
//
//    int days = 0;
//
//    // 计算完整年份的天数
//    for (int y = y1 + 1; y < y2; y++)
//        days += isLeap(y) ? 366 : 365;
//
//    if (y1 == y2) {
//        days = dayOfYear(y2, m2, d2) - dayOfYear(y1, m1, d1);
//    }
//    else {
//        days += (isLeap(y1) ? 366 : 365) - dayOfYear(y1, m1, d1)+dayOfYear(y2,m2,d2);
//       /* days += dayOfYear(y2, m2, d2);*/
//    }
//
//    return days;
//}
//int getday(int y, int m, int d) {
//	int total = 0;
//	int a[14] = {0,31,28,31,30,31,30,31,31,30,31,30 };
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) a[2] = 29;
//	for (int i = 0; i <m; i++) {
//		total += a[i];
//	}
//	total += d;
//	return total;
float getGve(int* p, int n) {
	float sum = 0;
	for (int i = 0; i < n; i++) {
		sum += p[i];
	}
	return sum / (n * 1.0);

}
int maxnum(int* p, int n) {
	int max = p[0];
	for (int i = 1; i < n; i++) {
		if (max < p[i]) max = p[i];
	}
	return max;
}

int minnum(int* p, int n)
{
	int min = p[0];
	for (int i = 1; i < n; i++) {
		if (min > p[i]) min = p[i];
	}
	return min;
}
