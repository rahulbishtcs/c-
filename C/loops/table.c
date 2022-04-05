#include <stdio.h>

int main()
{
    int n,i=1;
    scanf("%d",&n);
    while(1){
        if(i>10){
            break;
        }
        printf("%d * %d = %d\n",n,i,n*i);
        i++;
    }
    return 0;
}
