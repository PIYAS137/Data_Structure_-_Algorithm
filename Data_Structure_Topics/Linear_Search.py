# Linear Search

# finding function !
def findTarget(arr, target,len_input):
    for one in range(len_input):
        if arr[one] == target:
            return one
    return -1

# Execute start from here !

len_input = int(input("Enter the number of inputed value : "))
myArr = []
count = 0

while len_input != 0:
    count += 1
    x = int(input(f"SL {count}, Enter value : "))
    myArr.append(x)
    len_input -= 1

target = int(input("Enter the target value : "))

result = findTarget(myArr, target,len(myArr))

if result == -1:
    print("Item Not Found !")
else:
    print(f"Item found at myArr[{result}] = {myArr[result]}")
