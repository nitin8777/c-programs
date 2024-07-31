#include<stdio.h>
#include<conio.h>
void push();
void pop();
void display();

int stack[100],n,s,choice,top=-1,x;
int main()
{
printf("enter the size of stack");
scanf("%d",&s);
printf("\n \t 1: push \n \t 2: pop \n \t 3:display \n \t 4: exit");
do
{
    printf("enter the choice");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
    push();
    break;

    case 2:
    pop();
    break;

    case 3:
    display();
    break;
        default:
        printf("wrong chioce");
        break;
    }
} while (n!= 4);
return 0;
}

void push(){
    if(top==s-1){
        printf("stack is full");
    }
    else{
        printf("enter the element");
        scanf("%d",&x);
        stack[top]=x;
        top++;
    }
}
void pop(){
    if(top==-1){
        printf("stack is empty");
    }
    else{
        printf("poped element is %d",stack[top]);
        top--;
    }
}

void display(){
if (top==-1)
{printf("no element in stack");
}
else{
    for(int i=0;i<top;i++)
    {
        printf("%d",stack[i]);
    }
}
}