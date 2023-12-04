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
// in ra ma tran vua nhap duoi dang bang
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
