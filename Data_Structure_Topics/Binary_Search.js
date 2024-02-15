// Time complexity O(logN)
// Array must be sorted 


const myArr = [1,4,5,6,7,8,19];
const target = 8;
var left = 0;
var right = myArr.length;
var middle;

while(left<=right){
    middle = parseInt((left+right)/2);
    if(myArr[middle]==target){
        console.log(`Item found on index : ${middle}`);
        return;
    }else if(target>myArr[middle]){ // so that the value on right side, so avoud left side
        left = middle+1;
    }else{ // so that the value on left side, so avoud right side
        right = middle-1;
    }
}
console.log("Item not found !");