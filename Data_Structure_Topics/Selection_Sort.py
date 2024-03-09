'''******************************************************************************

                                Selection Sort
                Language : Python | Time Complexity : O(n^2)

*******************************************************************************'''





myArr = [7,4,10,8,3,1]
print(myArr)
length = len(myArr)

for i in range(0,length-1) : 
  min = i
  for j in range (i+1,length) :
    if myArr[min] > myArr[j] : 
      min = j
  if min != i : 
    myArr[min],myArr[i] = myArr[i],myArr[min] # Swap
print("============================ Final Result ============================")
print(myArr)