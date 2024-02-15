// Linear Search

#include <stdio.h>

int findItem(int arr[],int len,int target);
int main()
{
    int len,target;
    printf("Enter inputed element number : ");
    scanf("%d",&len);
    int myArr[len];
    for(int i=0;i<len;i++){
        printf("SL. %d, Enter input : ",i+1);
        scanf("%d",&myArr[i]);
    }
    printf("\nEnter target value : ");
    scanf("%d",&target);
    int result = findItem(myArr,len,target);
    (result==-1) ? printf("Item Not Found !") : printf("Item found on myArr[%d] = %d",result,myArr[result]);
    
    return 0;
}

int findItem(int arr[],int len,int target){
    for(int i=0;i<len;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}