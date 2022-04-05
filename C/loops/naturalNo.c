#include <stdio.h>

int main() {

    int n,r,res=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        res+=i;
    }
    printf("%d",res);
    return 0;
}
