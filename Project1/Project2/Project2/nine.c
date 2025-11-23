//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(){
//	int i;
//	for ( i = 100; i > 0; i--) {
//		if (i % 17 == 0) {
//			
//			break;
//		}
//		
//	}
//  printf("能被17整除的最大数为%d", i);
//  return 0;
//
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	int sum = 0;
//	for (int i = 200; i <= 400; i++) {
//		if (i % 3 != 0) sum += i;
//	}
//	printf("和为%d", sum);
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(){
//	int cnt=0;
//	double num,sum=0;
//	for (int i = 1; i <= 10; i++) {
//		printf("请输入第%d个数",i);
//		scanf("%lf", &num);
//		if (num >= 0) {
//			cnt++;
//			sum += num;
//		}
//	}
//	printf("非负数个数为%d个,和为%lf", cnt, sum);
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	char c;
//	printf("请输入一个字符");
//	scanf("%c", &c);
//	if (c >= 'A' && c <= 'Z') printf("%c\n", c + 32);
//	else if (c > 'a' && c <= 'z') printf("后%c\n", c - 32);
//	else printf("%c", c);
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	double  m=2, n=1,temp;
//	double sum = 0;
//
//	for (int i = 1; i <= 15; i++) {
//		sum += m / n;
//		temp = m ;
//		m = m + n;
//		n=temp;
//	}
//	printf("前15项和为%lf", sum);
//	return 0;
//
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int gettwocnt(int n);
//int main() {
	//一个皮球从100米高度自由落下，每次落地后反弹回原高度的一半，再落下，再反弹。求当它第10此落地式时，共经过了多少米，第10次反弹多高？
	//第一次   下落 100 反弹50 
	//第二次        50      25
	//第三次        25       12.5
	//第四次       12.5      6.25
	//第五次
	//第10次          yes   no   
	//double drop_high=200, rebound_high=100, total_high = 0;
	//double ten_rebound_high;
	//double temp;
	//for (int i = 1; i <= 10; i++) {

	//	drop_high = drop_high / 2;
	//	rebound_high =  rebound_high / 2;
	//	total_high += drop_high + rebound_high;
	//	if (i == 10) { printf("%lf\n", rebound_high);
	//	temp = rebound_high;
	//	total_high -= temp;
	//	
	//	}
	//}
	//printf("%lf", total_high);
	//return 0;


	/*int n;
	scanf("%d", n)*/;
//	int cnt = gettwocnt(12);
//	int cnt1 = gettwocnt(21);
//	int cnt2 = gettwocnt(23);
//	printf("%d\n%d\n%d", cnt,cnt1,cnt2);
//	/*return 0;*/
//}
//
//	int gettwocnt(int n)
//	{
//		int cnt = 0;
//	/*	scanf("%d", &n);*/
//		for (int i = 0; i <= n; i++) {
//			
//				int temp=i;
//				while(temp!=0){
//				if ((temp % 10) == 2) {
//					cnt++;
//
//				}
//				temp = temp / 10;
//				}
//			
//		}
//		return cnt;
//	
//		
//	}
	//int a; 键盘输入a的值，输出a的二进制格式（补码）中有多少位是1？


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
	int main() {
		//3.	给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数
		int n, temp=0,cnt=0,num;
		int arr[5];
		scanf("%d", &n);
		
		if (n == 0) {
			printf("一位数");
			printf("0");
			return 0;
		}
		temp = n;
		while (temp>0) {
			num = temp % 10;
			arr[cnt] = num;
			cnt++;
			temp /= 10;
		}
		printf("%d位数\n", cnt);
		for (int i = 0; i<cnt; i++) {
			printf("%d", arr[i]);
		}
		return 0;

		//2.	编写一个 C 程序，从键盘输入一个整数，计算并输出该整数的阶乘（如 5 的阶乘是 5×4×3×2×1=120，0 和 1 的阶乘均为 1）
	/*	int n, sum = 1;
		scanf("%d", &n);
		if (n == 1 || n == 0) return 1;
		for (int i = 1; i <= n; i++) {
			sum *= i;
		}
		printf("%d", sum);
		return 0;*/

		//1.	有一个数组，包含 8 个整数，编写程序将数组中的元素按从大到小的顺序排序，并输出排序后的数组。
	/*	int arr[8],i;
		printf("请输入数组");
		for (i = 0; i < 8; i++) {
			scanf("%d", &arr[i]);
		}
		for( i=0;i<8-1;i++)
		{
			for(int j=0;j<8-1-i;j++)
			{
				if (arr[j] < arr[j + 1])
				{
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}

		}
		for ( i = 0; i < 8; i++) { printf("%d ", arr[i]); }
		return 0;*/
}


//	#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//	int main() {
//		int a;
//
//		// 读取用户输入的整数
//		printf("请输入一个整数: ");
//		scanf("%d", &a);
//
//		int count = 0;
//		/*unsigned int num = (unsigned int)a;*/  // 转换为无符号整数来处理补码
//
//		// 使用位运算计算1的个数
//		while (a != 0) {
//			count += a & 1;  // 检查最低位是否为1
//		  a >>= 1;         // 右移一位
//		}
//
//		printf("整数 %d 的二进制补码中有 %d 位是1\n", a, count);
//
//		return 0;
//	}
