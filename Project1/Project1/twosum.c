#pragma once
#include "twosum.h"
int gettwocnt(int n)
{
	int cnt = 0;
	/*scanf("%d", &n);*/
	for (int i = 0; i <= n; i++) {
		int temp = i;
		while (temp != 0) {
			if ((temp % 10) == 2) {
				cnt++;
			}
			temp = temp / 10;
		}

		
	}
	return cnt;
}