/******************************************************************************

                                Selection Sort
                Language : C99 | Time Complexity : O(n^2)

*******************************************************************************/

#include <stdio.h>

int main()
{
    int myArr[]={7,4,10,8,3,1};
    int len = sizeof(myArr)/sizeof(myArr[0]);
    
    for(int i=0;i<len-1;i++){
        int min = i;
        for(int j=i+1;j<len;j++){
            if(myArr[min]>myArr[j]){
                min = j;
            }
        }
        if(min != i){
            int temp = myArr[i];
            myArr[i] = myArr[min];
            myArr[min]=temp;
        }
    }
    
    printf("\n================== Final Array ==================\n\n");
        for(int i=0;i<len;i++){
            // printf("Arr[%d]=%d\n",i,arr[i]);
            printf("%d ",myArr[i]);
        }
    printf("\n\n================== Final Array ==================\n");

    return 0;
}
