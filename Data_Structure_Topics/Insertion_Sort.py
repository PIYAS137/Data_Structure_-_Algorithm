



myArr = [2, 1, 5, 3, 7, 6, 9]
l = len(myArr)  
for one in range(1, l):
    temp = myArr[one]
    j = one - 1
    while j >= 0 and myArr[j] > temp:
        myArr[j + 1] = myArr[j]
        j -= 1
    myArr[j + 1] = temp

print(myArr)
