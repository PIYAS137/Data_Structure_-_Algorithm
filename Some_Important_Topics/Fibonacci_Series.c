// Fibonacci Series With Recursion (Final limit digit sum)

#include <stdio.h>

int Fibo(int limit);

int main()
{
    int limit;
    printf("Enter the limit : ");
    scanf("%d",&limit);
    int result = Fibo(limit);
    printf("Final Result : %d\n",result);
    return 0;
}
int Fibo(int limit){
    if(limit<=1){
        return 1;
    }
    return Fibo(limit-1)+Fibo(limit-2);
}