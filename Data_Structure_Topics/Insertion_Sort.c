
#include <stdio.h>
int main()
{
    int myArr[] = {2,4,7,5,8,3};
    int len = sizeof(myArr)/sizeof(myArr[0]);
    
    int temp;
    int j;
    
    for(int i=1;i<len;i++){
        temp = myArr[i];
        j=i-1;
        while(j>=0 && myArr[j]>temp){
            myArr[j+1]=myArr[j];
            j--;
        }
        myArr[j+1]=temp;
        
    }
    printf("========================= RESULT =========================\n");
    for(int i=0;i<len;i++){
        printf("myArr[%d]=%d\n",i,myArr[i]);
    }

    return 0;
}