def isPrime(num): # Time Complexity O(N)
  if num < 2:
    return False
  else:
    half = num // 2;
    for i in range(2, half + 1):
      if num % i == 0:
        return False
  return True

num = int(input('Enter Value of n... '))
if isPrime(num):
  print(num, 'is a Prime Number.')
else:
  print(num, 'is not a Prime Number.')