#  GCD = Greatest Common Divisor !

a,b = map(int,input("Enter 2 numbers : ").split(' '))
divisor, divident, reminder = 0,0,0
if a>b : 
  divident = a
  divisor = b
else :
  divident = b
  divisor = a
while divisor!=0 : 
  reminder = divident % divisor
  divident = divisor
  divisor = reminder
print(f"Final Result : {divident}")