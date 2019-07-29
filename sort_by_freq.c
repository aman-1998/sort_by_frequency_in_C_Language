#include<stdio.h>
#include<stdlib.h>

struct node
{
    int freq;
    int data;
};
int cmpfunc(const void *p,const void *q);
int main()
{
    int i,n,count,j;
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    int *a=(int*)malloc(n*sizeof(int));
    struct node *A=(struct node*)malloc(n*sizeof(struct node));
    for(i=0;i<=n-1;i++)
    {
        printf("Enter a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        count=0;
        for(j=0;j<=n-1;j++)
        {
            if(a[i]==a[j])
                count++;
        }
        A[i].freq=count;
        A[i].data=a[i];
    }
    qsort(A,n,sizeof(struct node),cmpfunc);
    for(i=0;i<=n-1;i++)
        a[i]=A[i].data;
    printf("\nSorted: \n");
    for(i=0;i<=n-1;i++)
        printf("%d ",a[i]);
}
int cmpfunc(const void *p,const void *q)
{
    int x=((struct node*)p)->freq;
    int y=((struct node*)q)->freq;
    if(x>y)
        return -1;
    else
        return 1;
}
