// Find factorial with recursion for limited inputed limit

#include <stdio.h>

int Factorial(int limit);

int main()
{
    int limit;
    printf("Enter the limit : ");
    scanf("%d",&limit); // Input = 15
    
    int result = Factorial(limit);
    printf("Final Result : %d\n",result); // Final Result : 2004310016
    return 0;
}

int Factorial (int limit){
    if(limit<=1){
        return 1;
    }
    return limit * Factorial(limit-1);
}
