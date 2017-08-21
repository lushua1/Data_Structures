/*
	冒泡排序（Bubble Sort），是一种计算机科学领域的较简单的排序算法。
	它重复地走访过要排序的数列，一次比较两个元素，如果他们的顺序错误就把他们交换过来。走访数列的工作是重复地进行直到没有再需要交换，也就是说该数列已经排序完成。
	这个算法的名字由来是因为越大的元素会经由交换慢慢“浮”到数列的顶端，故名。

	冒泡排序算法的运作如下：（从后往前）
	比较相邻的元素。如果第一个比第二个大，就交换他们两个。
	对每一对相邻元素作同样的工作，从开始第一对到结尾的最后一对。在这一点，最后的元素应该会是最大的数。
	针对所有的元素重复以上的步骤，除了最后一个。
	持续每次对越来越少的元素重复上面的步骤，直到没有任何一对数字需要比较。
 */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <assert.h>

int *bubblesort(int *pData,int count)
{
	int i,j,tmp;
	assert(pData!=NULL);
	for(i = 1;i<count;i++)
		for(j = 0;j < count - i;j++)
		{
			if(pData[j] > pData[j+1])
			{
				tmp = pData[j];
				pData[j] = pData[j+1];
				pData[j+1] = tmp;
			}
		}
	return pData;
}

int main()
{
	int arr[] = {10,9,8,7,6,5,4,3,2,1,0};
	int *p = bubblesort(arr,11);
	int i = 0;
	for(i = 0;i < 11;i++)
		printf("%d ",p[i]);
	printf("\n");
}
