#include<stdio.h>
#include<stdlib.h>
#define SIZE 4
int top=-1,inp_arrey[SIZE];
void push();
void pop();
void show();
int main ()
{
int choice;
while (1)
{
printf("\n perform operation on the stack :");
printf("\n1. push the element \n2.pop the element \n3.show\n4.end");
printf("Enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
push();
break;
case 2:
pop();
break;
case 3:
show();
break;
case 4:
exit(0);
default:
printf("\n invalid choice!");
}
}
}
void push()
{
int x;
if(top==SIZE-1)
{
printf("\noverflow!!");
}
else
{
printf("\n enter the element to be added onto the stack:");
scanf("%d",&x);
top=top + 1;
inp_arrey[top]=x;
}
}
void pop ()
{
if (top==-1)
{
printf("\n underflow!!");
}
else
{
printf("\n popped element :%d",inp_arrey[top]);
top=top-1;
}
}
void show()

{
if(top==-1)
{
printf("\n Elements in the stack ;\n");
for (int i=0; i<=top;++i)
{
printf("%d",inp_arrey[i]);
}
}    
}