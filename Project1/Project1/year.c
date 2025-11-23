
#include "year.h"
void qiutianshu(int month,int mday)
{
    int s = 0;
    /*int month, mday;*/
    /*printf("请输入月和日：\n");
    scanf_s("%d,%d", &month, &mday);*/
    switch (month)
    {
    case 12:      s += 30;
    case 11:      s += 31;
    case 10:      s += 30;
    case 9:       s += 31;
    case 8:       s += 31;
    case 7:       s += 30;
    case 6:       s += 31;
    case 5:       s += 30;
    case 4:       s += 31;
    case 3:       s += 28;
    case 2:       s += 31;
    case 1:       s += 0; break;
    default:printf("输入有误!\n");
       
    }
    
        s += mday;
        printf("%d月%d日是该年的第%d天\n", month, mday, s);
}
int judgeLeap(int year) {
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) return 1;
    else return 0;
}
