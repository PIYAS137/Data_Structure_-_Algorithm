// Time complexity O(logN)
// Array must be sorted 


#include <stdio.h>
int main()
{
    int myArr [] = {2,3,5,7,8,9,19};
    int target = 5;
    int left=0;
    int right=sizeof(myArr)/sizeof(myArr[0]);
    int middle;
    
    while(left<=right){
        middle = (left+right)/2;
        if(myArr[middle]==target){
            printf("Item found at index : %d\n",middle);
            return 0;
        }else if(target>myArr[middle]){
            left = middle+1;
        }else{
            right = middle-1;
        }
    }
    printf("Item not found !");
    
    return -1;
}