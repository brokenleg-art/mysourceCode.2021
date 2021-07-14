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
	apt_array(rs, cs, nums, ori);//转换成rs*cs的二维数组
	print_array(rs, cs, nums);//将转换后的结果打印出来

	return 0;
}
void apt_array(int rows, int cols, int nums[rows][cols], int ar[ROWS][COLS])//函数功能：将预先定义的二维数组按照指定格式打印出来
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

void print_array(int rows, int cols, int nums[rows][cols])//将转化后的数组打印出来
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
