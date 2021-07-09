#include<stdio.h>
#define MAX 100
int majorityElement(int * nums, int numsSize);
int main()
{
    int nums[MAX];
    int i;
    char ch;
    int * poi;
    int len;
    int result = 0;
    printf("input your array:");
    for(i = 0; i < MAX; i++)
    {  
        scanf("%d%c", &nums[i], &ch);
        if(ch == '\n')
        {
            break;
        }
    }               //采集数组
    poi = nums;
    len = i;
    result  = majorityElement(poi, len+1);
    printf("the result is :%d\n" , result);//计算主要主要元素个数

    return 0;
}

int majorityElement(int* nums, int numsSize)//函数功能：计算一个数组中主要元素个数
{   
    int i;
    int j;
    int stand = 1;
    int rep = 0;
    for(i = 0; i < numsSize; i++)
    {
        for(j = 0; j < numsSize - i; j++)
        {
            if(nums[j] > nums[j+1])
            {
                rep = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = rep;
            } 
        }
    }

    rep = numsSize / 2;

    for(i = 0; i < numsSize-1; i++)
    {
   	if(nums[i] == nums[i+1])
	{
		stand += 1;
	}
	else
	{	
		if(stand > rep)
			break;
		else
			stand = 1;
	}
	
    }

    if(stand == 1)
    {
    	stand = -1;
    }

    return stand;
    
}
