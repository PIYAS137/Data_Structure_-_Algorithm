#include <stdio.h>
int main(){
    
    int a,b = 0;
    int divisor, divident, reminder = 0;
    
    printf("Enter 2 numbers : ");
    scanf("%d %d",&a,&b);
    
    if(a>b){
        divident = a;
        divisor = b;
    }else{
        divident = b;
        divisor = a;
    }

    while(divisor!=0){
        reminder = divident % divisor;
        divident = divisor;
        divisor = reminder;
    }
 
    printf("Final Result : %d\n",divident);

    return 0;
}
