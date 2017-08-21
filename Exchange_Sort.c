/*
 所谓交换，就是根据序列中两个记录键值的比较结果来对换这两个记录在序列中的位置，交换排序的特点是：将键值较大的记录向序列的尾部移动，键值较小的记录向序列的前部移动。
 */

#include <stdlib.h>                                                                                                     
#include <stdio.h>                                                                                                      
#include <time.h>                                                                                                       
#include <assert.h>

int * exchangesort(int *pData,int count)
{
	int i,j;
	int temp;
	assert(pData != NULL);

	for(i = 0;i<count-1;i++)
		for(j = i+1;j<count;j++)
			if(pData[i]>pData[j])
			{
				temp = pData[i];
				pData[i] = pData[j];
				pData[j] = temp;
			}
	return pData;
}

int main()                                                                                                              
{                                                                                                                       
	int arr[] = {10,9,8,7,6,5,4,3,2,1,0};																				
	int *p = exchangesort(arr,11);                                                                                        
	int i = 0;                                                                                                          
	for(i = 0;i < 11;i++)                                                                                               
		printf("%d ",p[i]);                                                                                             
	printf("\n");                                                                                                       
}
