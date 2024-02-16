myArr=[2,3,4,5,6,7,]
length = len(myArr)
flag=0
count=0

for i in range(0,length) :
    for j in range(0,length-i-1) :
        count+=1
        if myArr[j]> myArr[j+1] :
            myArr[j] = myArr[j]+myArr[j+1]
            myArr[j+1] = myArr[j] - myArr[j+1]
            myArr[j] = myArr[j] - myArr[j+1]
            flag+=1
    if flag==0 :
        break;
print(myArr)
print(f"Total Loop Count : {count}")