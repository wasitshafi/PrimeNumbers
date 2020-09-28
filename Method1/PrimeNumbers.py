def isPrime(num): # Time Complexity O(N)
  i = 2
  
  if num > 1:
    while num % i != 0:
      i += 1
  return i == num

num = int(input('Enter Value of n... '))
if isPrime(num):
  print(num, 'is a Prime Number.')
else:
  print(num,'is not a Prime Number.')