#ifndef __SORT__H__
  #define __SORT__H__
  #define N 10

  #include <stdlib.h>
  #include <stdio.h>
  #include <time.h>
  #include <assert.h>

  extern n;

    //冒泡排序
    extern int *bubblesort(int *,int);

	extern int *arraynum();
    extern int *exchangesort(int *,int);
	extern int *choicesort(int *,int);
	extern int *insertsort(int *,int);
	extern int *quicksort(int *,int,int);
	extern void qsort_c();

	extern int *shellsort(int *,int);
	
	extern void merge(int *,int,int *,int,int,int *,int,int);           
					  extern void merge_sort(int *,int,int );

#endif
