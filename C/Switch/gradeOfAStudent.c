#include<stdio.h>

int main(){
    
    int m1,m2,m3,m4,m5,perc;
    float per;
    printf("Enter the marks of 5 subjects\n");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    per = ((m1+m2+m3+m4+m5)*100)/500;
    per/=10;
    perc = per;
    switch(perc){
        default:printf("F");
                break;
        case 10:printf("A");
                break;
        case 9:printf("B");
                break;
        case 8:printf("c");
                break;
        case 7:printf("D");
                break;
        case 6:printf("E");
                break;
        
    }
    return(0);
}
