// PUSH and  POP operations of stack
#include <stdio.h>
int stk[20], i, max=5, top,item,c;
int pop()
{
    if (top==0)
    {
        printf("\nStack is Empty");
        return 0;
    }
    top--;
	printf("\nSTACK:\n");
	for(i=top;i>=1;i--)
    {
        printf("\n%5d",stk[i]);
    }
}
int push()
{
 if (top==max)
    {
        printf("Stack is Full");
        return 0;
    }
	top++;
	printf("\nEnter New item for PUSH:");
	scanf("%d",&item);
	stk[top]=item;
	printf("\nSTACK:\n");
	for(i=top;i>=1;i--)
    {
        printf("\n%5d",stk[i]);
    }
}
int main()
{
for(;;)
{
	printf("\nEnter your choice:\n1. PUSH\n2. POP\n3. Exit\n");
	scanf("%d",&c);
	switch(c)
	{
 case 1:
    push();
    break;
 case 2:
    pop();
    break;
 default:
    return 0;
	}
}
	return 0;
}
