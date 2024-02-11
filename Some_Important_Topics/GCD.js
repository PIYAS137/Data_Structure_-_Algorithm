let a=24, b=60;
var divisor, divident, reminder;

if(a>b){
    divident = a;
    divisor = b;
}else{
    divident = b;
    divisor = a;
}

while(divisor!=0){
    reminder = divident%divisor;
    divident = divisor;
    divisor = reminder;
}

console.log(`Final Result : ${divident}`);

