// Linear Search

const findTarget = (arr,len,target)=>{
    for(let one=0;one<len;one++){
        if(arr[one]==target){
            return one;
        }
    }
    return -1;
}



const myArr = [2,3,4,1,9,7];
const target = 1;
const len = myArr.length;
const result = findTarget(myArr,len,target);

{
    result == -1 ? console.log("Item Not Found !") : console.log(`Item Found on myArr[${result}]=${myArr[result]}`);
}