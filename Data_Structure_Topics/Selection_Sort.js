/******************************************************************************

                                Selection Sort
                Language : JS(ES6) | Time Complexity : O(n^2)

*******************************************************************************/


var myArr = [7,4,10,8,3,1];
var len = myArr.length;
for(let i=0;i<len-1;i++){
    let min = i;
    for(let j=i+1;j<len;j++){
        if(myArr[j]<myArr[min]){
            min = j;
        }
    }
    if(min != i){
        let temp = myArr[i];
        myArr[i] = myArr[min];
        myArr[min] = temp;
    }
}


console.log(myArr);