#include<stdio.h>

#define MAX 1000

void copy_copy(double * pa, double * pb, int len);
void copy_2(double * pa, double (*pb)[5], int len, int col);
int line_num(int len, int col);

int main()
{	
	int i, j, len, mount;
	int col = 5;
	char ch;
	
	double nums[MAX];
	double nums_co[MAX];
	double nums_2[MAX][5];
	
	double *start;
	double *start_co;
	double (*coco)[5]; //����Ҫ���ƽ�ȥ�Ķ�ά�����ָ��
	
	start = nums;
	start_co = nums_co;
	coco = nums_2;	//��ص�ָ���ʼ��
	
	printf("input your array:");
	for(i = 0; i < MAX; i++)
	{
		scanf("%lf%c", &nums[i], &ch);
		if (ch == '\n')
			break;
	}
	len = i + 1;	//��nums�����¼����������ݣ�����¼���鳤��
	
	mount = line_num(len, col);	//ȷ�����ɵĶ�ά���������
	
	copy_2(start, coco, len, 5);
	
	for(i = 0; i < mount; i++)//�����ɵĶ�ά�����ӡ����
	{	
		for(j = 0; j < col; j++)
		{
			printf("%.2f ",nums_2[i][j]);
		}
		putchar('\n');
	}

	return 0;
}

void copy_2(double * pa, double (*pb)[5], int len, int col)//�������ܣ���һά����İ���ʽ���Ƶ���ά������
{
	int i,j;
	int mount;
	if(len % col == 0)
		mount = len / col;
	else
		mount = len / col + 1;

	for(i = 0; i < mount; i++)
	{
		for(j = 0; j < col; j++)
		{
			*(*(pb + i) + j) = pa[i*col + j];
		}
	}	
}

void copy_copy(double * pa, double * pb, int len)
{
	int k;
	for(k = 0; k < len; k++)
	{
		pb[k] = pa[k];
	}	

}

int line_num(int len, int col)//�������ɵĶ�ά��������
{		
		int mount;
		if(len % col == 0)
			  mount = len / col;
	 	else
				mount = len / col + 1;
		
		return mount;
}

