//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void)
//{
//    int y1, y, y2;
//    int sum = 0;
//    scanf_s("%d%d", &y1, &y2);
//    for (y = y1; y <= y2; y++) {
//        if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
//            sum++;
//        }
//    printf("一共有%d个闰年", sum);
//    return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void)
//{
//  
//    for (int i = 1; i <= 9; i++) {
//        for (int j = 1; j <= i; j++) {
//            printf("%d*%d=%d\t",j,i,j*i);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void)
//{
//    int a, b, m;
//   
//    scanf_s("%d%d", &a,&b);
//    m = (a > b) ? a : b;
//    for (m ; m <= a * b; m++) {
//        if (m % a == 0 && m % b == 0)
//            /*   break;*/
//            break;
//
//    }
//    printf("a和b的最大公倍数%d", m);
//    return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void)
//{
//    int a, b, m, c, i;
//    scanf_s("%d%d", &a, &b);
//    m = (a > b) ? a : b;
//    for ( m; m>0; m--) {
//        if (a % m == 0 && b % m == 0)
//        {
//           
//            printf("a和b的最大公约数为%d", m);
//            break;
//        }
//    }
//    return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int a = 10, b, m, c, i;
    while (--a) {
        printf("a");

    }
    return 0;
}