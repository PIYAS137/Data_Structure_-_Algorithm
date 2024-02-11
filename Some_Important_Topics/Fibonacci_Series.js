// Fibonacci Series With Recursion (Final limit digit sum)

const limit = 5;

const Fibo=(limit)=>{
    if(limit<=1){
        return 1;
    }
    return Fibo(limit-1)+Fibo(limit-2);
}

const result = Fibo(limit);
console.log(`Final Result : ${result}`);