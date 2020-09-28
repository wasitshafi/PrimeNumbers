def isPrime(num, i): # Time Complexity O(sqrt(N))
  if num < 2:
    return False
  elif num == 2:
    return True
  elif num % i == 0:
    return False
  elif i * i > num:
    return True
  else:
    return isPrime(num, i + 1)

num = int(input('Enter Value of n... '))
if isPrime(num, 2):
  print(num, 'is a Prime Number.')
else:
  print(num,'is not a Prime Number.')