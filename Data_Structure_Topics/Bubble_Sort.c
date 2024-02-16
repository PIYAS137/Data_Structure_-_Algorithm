#include<stdio.h>
int main(){
    
    int myArr[]={1,2,3,4,9,70};
    int len = sizeof(myArr)/sizeof(myArr[0]);
    int flag;
    int count;
    for(int i=0;i<len;i++){
        for(int j=0;j<len-i-1;j++){
            count++;
            if(myArr[j]>myArr[j+1]){
                myArr[j]=myArr[j]+myArr[j+1];
                myArr[j+1]=myArr[j]-myArr[j+1];
                myArr[j]=myArr[j]-myArr[j+1];
                flag++;
            }
        }
        if(flag==0){
            break;
        }
    }
    // printing area
    printf("=============== FINAL RESULT ===============\n");
    for(int i=0;i<len;i++){
        printf("myArr[%d]=%d\n",i,myArr[i]);
    }
    printf("=============== FINAL RESULT ===============\n");
    printf("\nTotal loop Count : %d\n",count);
    return 0;
}