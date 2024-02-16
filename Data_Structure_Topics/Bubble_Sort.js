
var myArr = [1,2,3,4,5,6];
var flag=0;
var count=0;

for(let i=0;i<myArr.length;i++){
    for(let j=0;j<myArr.length-i-1;j++){
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

console.log("=============== RESULT ===============");
console.log(myArr);
console.log("=============== RESULT ===============");
console.log("Total Loop Count : ",count);