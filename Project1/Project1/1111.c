//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void)
//{
//    int a = 10, b, m, c, i;
//    while (--a) {
//        printf("a");
//
//    }
//    return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void)
//{
//    int a=0, cnt=0;
//    scanf_s("%d", &a);
//    /*while (a != 0) {
//        a = a / 10;
//        cnt++;
//    }*/
//    for(a;a>0;a/=10){
//        cnt++;
//    }
//    printf("a是%d位数", cnt);
//
//    
//    return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void)
//{
//    int a, b, c;
//    int temp;
//    scanf_s("%d%d%d", &a, &b, &c);
//    if (a > b) { temp = a; a = b; b = temp; }
//    if (b > c) { temp = b; b = c; c = temp; }
//
//  
//    if (a + b > c && a + c > b && b + c > a)
//   {
//        if (a == b && b == c) { printf("等边三角形\n"); }
//        else if (a * a + b * b ==c * c) printf("直角三角形\n");
//        else if (a == b) {
//            if (a ^ 2 + b ^ 2 == c ^ 2) printf("等腰直角三角形\n");
//            else if (a * a + b * b > c * c) printf("等腰锐角三角形\n");
//            else printf("等腰钝角三角形\n");
//        }
//        else if (a * a + b * b > c * c) printf("锐角三角形\n");
//        else printf("钝角三角形");
//    }
//    else printf("error");
//      
//    return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void)
//{
//    int r, m, n;
//    scanf("%d%d", &m, &n);
//   /* if (m < n);
//    r = m % n*/;
//    while (n!=0)
//    {
//      /*  m = n;
//        n = r;
//        r = m % n*/
//        r = m % n;
//        m = n;
//        n = r;
//
//    }
//    printf("最大公约约数%d\n", m);
//    return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//    int i, j;  //二维数组下标
//    int sum = 0;  //当前科目的总成绩
//    int average;  //总平均分
//    int v[3];  //各科平均分
//    int a[5][3];  //用来保存每个同学各科成绩的二维数组
//    printf("Input score:\n");
//    for (i = 0; i < 3; i++) {
//        for (j = 0; j < 5; j++) {
//            scanf("%d", &a[j][i]);  //输入每个同学的各科成绩
//            sum += a[j][i];  //计算当前科目的总成绩
//        }
//        v[i] = sum / 5;  // 当前科目的平均分
//        sum = 0;
//    }
//    average = (v[0] + v[1] + v[2]) / 3;
//    printf("Math: %d\nC Languag: %d\nEnglish: %d\n", v[0], v[1], v[2]);
//    printf("Total: %d\n", average);
//    return 0;
//}
