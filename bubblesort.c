#include<stdio.h>
#include<conio.h>
int main()
{
int array[50],num,i,j,temp;
printf("enter size of array");
scanf("%d",&num);
printf("value of element");
for ( i = 0; i < num; i++)
{
    scanf("%d",&array[i]);
}

for ( i = 0; i < num; i++)
{
    for ( j = 0; j < num-1; j++)
    {
        if (array[j]>array[j+1])
        {
            temp=array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
        }
    }
}
printf("array after bubble sort :");
for ( i = 0; i < num; i++)
{
    printf("%d\t",array[i]);
}

return 0;
}
