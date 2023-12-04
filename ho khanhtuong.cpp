#include<stdio.h>
#include<conio.h>
main()
{
	int a[50][50];
	int i,j,m,n;
	printf("nhao so hang n="); scanf("%d",&n);
	printf("nhap so cot m="); scanf("%d",&m);
	printf("nhap vao ma tran:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
    printf("ma tran vua nhap la:\n");
    for(i=0;i<n;i++)
{
	for(j=0;j<m;j++)
	{
		printf("%d "),a[i][j];
	}
	printf("\n");
}
}
}	
void phim2()
{
	int a[50][50];
	int m,n,l,j;
	printf("nhap so dong n="); scanf("%d",&n);
	printf("nhap so cot m="); scanf("%d",&m);
	printf("nhap vao ma tran:\n");
	for(int i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
   printf("ma tran vua nhap la:\n");
   for(int i=0;i<n;i++)
   {
       for
	   (int j=0;j<m;j++)
       {
       	    printf("%d ",a[i][j]);
   	   }
   	printf("\n");
   }
    
}
void chia3(){
	int arr[10][10] = {
		{2, 3, 5, 7, 11, 13, 17, 19, 23, 29},
		{4, 6, 8, 10, 12, 14, 16, 18, 20, 22,},
		{5, 7, 11, 13, 17, 19, 23, 29, 31, 37},
		{6, 8, 10, 12, 14, 16, 18, 20, 22, 24},
		{7, 11, 13, 17, 19, 23, 29,31, 37, 41},
		{8, 10, 12, 14, 16, 18, 20, 22, 24, 26},
		{9, 11, 13, 17, 19, 23, 29, 21, 37, 41},
		{10, 12, 14, 16, 18, 20, 22, 24, 26, 28},
		{11, 13, 17, 19, 23, 29, 31, 37, 41, 43},
		};
		int sum = 0;
		for (int i=0;i<10;i++)
		{
			for (int j=0; j<10;j++)
			{
				if (arr[i][j] % 3 == 0)
				{
					sum += arr[i][j];
				}
			}
		}
}	
