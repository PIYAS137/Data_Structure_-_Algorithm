# Time complexity O(logN)
# Array must be sorted 


# finding function !
def findItem (myArr,target) :
    left = 0
    right = len(myArr)
    while left<=right :
        middle = int((left+right)/2)
        if(myArr[middle]==target) :
            print(f"Item found on index : {middle}")
            return
        elif target<myArr[middle] :
            right = middle-1
        else :
            left = middle+1
    print(f"Item not found !")


# Execute start from here 

myArr = [1,4,5,6,7,9]
target = 7

findItem(myArr,target)