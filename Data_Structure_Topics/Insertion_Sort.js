


const myArr = [2, 3, 6, 4, 1, 7];

var temp, j;

for (let i = 1; i < myArr.length; i++) {
    temp = myArr[i];
    j = i - 1;
    while (j >= 0 && myArr[j] > temp) {
        myArr[j + 1] = myArr[j];
        j--;
    }
    myArr[j + 1] = temp;
}

console.log(myArr);