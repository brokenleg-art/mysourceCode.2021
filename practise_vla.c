#include<stdio.h>
#define ROWS 3
#define COLS 5
#define MAX 1000
void apt_array(int rows, int cols, int nums[rows][cols], int ar[ROWS][COLS]);
void print_array(int rows, int cols, int nums[rows][cols]);
int main()
{	
	int  ori[ROWS][COLS] ={
		{1, 2, 3, 4, 5},
		{1, 3, 5, 7, 9},
		{2, 4, 6, 8, 10}
	};
	int rs = COLS;
	int cs = ROWS;
	int nums[rs][cs];
	apt_array(rs, cs, nums, ori);//ת����rs*cs�Ķ�ά����
	print_array(rs, cs, nums);//��ת����Ľ����ӡ����

	return 0;
}
void apt_array(int rows, int cols, int nums[rows][cols], int ar[ROWS][COLS])//�������ܣ���Ԥ�ȶ���Ķ�ά���鰴��ָ����ʽ��ӡ����
{	
	int i, j;
	int k = 0;
	int len;
	int tem[MAX] = { 0 };
	for(i = 0; i < ROWS; i++)
	{
		for(j = 0; j < COLS; j++)
		{
			tem[k] = *(*(ar + i) + j);
			k++;
		}
	}

	k = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			nums[i][j] = tem[k];
			k++;
		}
	}
	
}

void print_array(int rows, int cols, int nums[rows][cols])//��ת����������ӡ����
{
	int i,j;
	for(i = 0 ; i < rows; i++)
	{
		for(j = 0; j < cols; j++)
		{
			printf("%d ",nums[i][j]);
		}
		putchar('\n');
	}
}
