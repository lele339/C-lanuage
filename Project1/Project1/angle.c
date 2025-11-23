#include "angle.h"


int judgeangle(int a,int b,int c)
{
  /*  int a, b, c;
    printf("输入三角形三边\n");
    scanf_s("%d%d%d", &a, &b, &c);*/
    int temp;

    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    if (a + b > c)
    {
        //锐角条件
        if (a * a + b * b > c * c)
        {
            if (a == b)
            {
                if (b == c)
                {
                    printf("等边三角形\n");
                    return;
                }
                printf("锐角等腰三角形\n");
                return;
            }
            printf("锐角三角形\n");
            return;
        }
        //钝角条件
        else if (a * a + b * b < c * c)
        {
            if (a == b)
            {
                printf("钝角等腰三角形\n");
                return;
            }
            printf("钝角三角形\n");
            return;
        }
        //直角条件
        else if (a * a + b * b == c * c)
        {
            if (a == b)
            {
                printf("等腰直角三角形\n");
                return;
            }
            printf("直角三角形\n");
            return;
        }
    }
    else {
        printf("NO\n");
    }
    return 0;
}