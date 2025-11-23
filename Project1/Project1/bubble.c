#include "bubble.h"
	// ц╟ещеепР
    void Bubble_sort(int* p, int n)
    {
        int temp = 0,sum=0;
        for (int i = 0; i < 10 - 1; i++)
        {
            for (int j = 0; j < 10 - i - 1; j++)
            {
                if (p[j] > p[j + 1])
                {
                    temp = p[j];
                    p[j] = p[j + 1];
                    p[j + 1] = temp;
                }
            }
        }
    }
//    float avg(int p[], int n) {
//
//}