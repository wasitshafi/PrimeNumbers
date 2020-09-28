def isPrime(num): # Time Complexity O(sqrt(N))
  if num < 2:
    return False;
  else:
    i = 2
    while (i * i <= num):
      if num % i == 0:
        return False;
      i += 1;
    return True;

num = int(input('Enter Value of n... '))
if isPrime(num):
  print(num, 'is a Prime Number.')
else:
  print(num,'is not a Prime Number.')