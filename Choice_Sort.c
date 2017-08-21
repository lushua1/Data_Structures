/*
	选择排序（Selection sort）是一种简单直观的排序算法。它的工作原理是每一次从待排序的数据元素中选出最小（或最大）的一个元素，存放在序列的起始位置，直到全部待排序的数据元素排完。 选择排序是不稳定的排序方法（比如序列[5， 5， 3]第一次就将第一个[5]与[3]交换，导致第一个5挪动到第二个5后面）。
 */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <assert.h>

int *choicesort(int *pData,int count)
{
	int i,j,temp,pos;
	assert(pData != NULL);
	for(i = 0;i<count;i++)
	{
		pos = i;
		temp = pData[i];
		for(j = i + 1;j < count;j++)
		{
			if(pData[i] > pData[j])
			{
				pData[i] = pData[j];
				pos = j;
			}
		}
		pData[pos] = temp;
	}
	return pData;
}

int main()
{
	int arr[] = {10,9,8,7,6,5,4,3,2,1,0};
	int *p = choicesort(arr,11);
	int i = 0;
	for(i = 0;i < 11;i++)
		printf("%d ",p[i]);
	printf("\n");
}
