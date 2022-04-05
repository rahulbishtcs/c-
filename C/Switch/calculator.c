#include <stdio.h>
#include<conio.h>
int main()
{
    char c;
    int a,b,res=0;
    printf("Enter operator");
    scanf("%c",&c);
    printf("Enter two oprands");
    scanf("%d%d",&a,&b);
    switch(c){
        case '+':res=a+b;
                 printf("%d",res);
                 break;
        case '-':res=a-b;
                 printf("%d",res);
                 break;    
        case '*':res=a*b;
                 printf("%d",res);
                 break;
        case '/':res=a/b;
                 printf("%d",res);
                 break;
        case '%':res=a%b;
                 printf("%d",res);
                 break;
        default:printf("Wrong operator");
        
    }
    return 0;
}
