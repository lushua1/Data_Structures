/*
 Shell排序基本思想：先取一个小于n的整数d1作为第一个增量，把文件的全部记录分成d1个组。所有距离为dl的倍数的记录放在同一个组中。先在各组内进行直接插入排序；然后，
				取第二个增量d2<d1重复上述的分组和排序，直至所取的增量dt=1(dt<dt-l<；…<d2<d1），即所有记录放在同一组中进行直接插入排序为止。
					 该方法实质上是一种分组插入方法。
 算法步骤：
Step1 将n个元素个数列分为5个小组，在每个小组内按直接插入法排序；
step2 在第i步，分组个数取 di+1 =（di +1）/2 {9，5，3，2，1}；相临两组之间的对应元素进行比较，如果ai>aj，则交换它们的位置；
Step3 当dK = 1的循环过程完成后，排序过程结束。
 */

int *shellsort(int *pData,int length)
{
	int temp;
	int i,j;
	int increment;
	int i1;

	for(increment = length / 2;increment > 0;increment /= 2)
		for(i = increment;i < length; ++i)
		{
			temp = pData[i];
			for(j = i;j>=increment;j-=increment)
			{
				if(temp < pData[j - increment])
				{
					pData[j] = pData[j - increment];
				}
				else 
				{
					break;
				}
			}
			pData[j] = temp;
			printf("\n===================Shell sorting ================\n");
			for(i1 = 0;i1 < 6;i1++)
				printf("%-5d ",pData[i]);
			printf("====increment=%d\n",increment);
		}
	return pData;
}

int main()
{
	int a[] = {10,9,8,7,6,5,4,3,2,1,0};
	int *p = shellsort(a,11);
	
	int i = 0;
	for(i = 0;i<11;i++)
		printf("%d ",p[i]);
	printf("\n");
}
