#include "statisnum.h"
int getOne(int n) {
	int cnt = 0, temp;
	for(int i=0;i<32;i++){
		if (n & (1<<i))cnt++;

	}
	return cnt;
}