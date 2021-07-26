#include<stdio.h>

#define MAX 100

void array_plus(int * p1, int * p2, int * p3, int len);
int main()
{	
	int nums1[4] = {3,4,8,1};
	int nums2[4] = {1,2,3,4};
	int nums3[4] = {0};
	int len = 4;
	int * p1;
	int * p2;
	int * p3;

	p1 = nums1;
	p2 = nums2;
	p3 = nums3;

	array_plus(p1, p2, p3, len);
	for(int i = 0; i < len; i++)
	{
		printf("%d ", nums3[i]);
	}	
	
	putchar('\n');

	return 0;
}

void array_plus(int * p1, int * p2, int *p3, int len)
{
	int i;
	for(i = 0; i < len; i++)
	{
		p3[i] = p1[i] + p2[i];
	}

}
