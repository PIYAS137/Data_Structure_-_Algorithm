// Fibonacci Series With Recursion

const limit = 5;

const Fibo=(limit)=>{
    if(limit<=1){
        return 1;
    }
    return Fibo(limit-1)+Fibo(limit-2);
}

const result = Fibo(limit);
console.log(`Final Result : ${result}`);