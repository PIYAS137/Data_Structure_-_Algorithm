// Find factorial with recursion for limited inputed limit

var limit = 15;

const Factorial=(limit)=>{
    if(limit<=1){
        return 1;
    }
    return limit*Factorial(limit-1);
}

const result = Factorial(limit);
console.log(`Final Result : ${result}`); // Final Result : 1307674368000



// same concept but output is diffect for C99 and This code !
// The issue might be related to the limitations of recursion depth and numerical precision in JavaScript