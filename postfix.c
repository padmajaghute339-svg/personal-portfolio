#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>
double s[30];
int top=-1
void push(double);
double pop();
void main()
{
    char symb[30];
    int i,len;
    double op1,op2,ans;
    char c;
    clrscr();
    printf("\n Enter expression in the postfix form:");
    gets(symb);
    len=strlen(symb);
    for(i=0;i<len;i++)
    {
        if(isdigit(symb[i]))
        push(symb[i]-'0');
        else
        {
            op2=pop()
            printf("\n Operand2 is:%if",op2);
            op 1=pop();
            printf("\n Operand1 is:%if",op1);
            switch(symb[i])
            {
                case'+':ans=op1+op2;
                break;
                case'-':ans=op1-op2;
                break;
                case'*':ans=op1*op2;
                break;
                case'/':ans=op1/op2;
                break;
                case'$':ans=pow(op1,op2);
                break;
            }
            push(ans);
        }
    }
    ans=pop();
    printf("%s","\n\n\t Result of exp is:");
    printf("%if",ans);
    getch();
}
void push(double elem)
{
    if(top==30)
    printf("%s","STACK IS FULL");
    else
    {
        top++;
        s[top]=elem;
        printf("\n Now stack contains:%if",s[top]);
    }
}
double pop()
{
    double elem;
    if(top<0)
    printf("%s","the stack is empty:");
    else
    {
        elem=s[top];
        top--;
    }
    return(elem);
    }

