def setPrimes(arr, n): # Time Complexity O(N Log(Log N))
  arr[0] = 1
  arr[1] = 1
  i = 2
  while i * i <= n:
    if arr[i] == 0:
      x = i * i
      while x <= n:
        arr[x] = 1
        x += i
    i += 1

def printPrimes(arr, n):
  for i in range(n + 1):
    if arr[i] == 0:
      print(i, end=' ')
      
n = int(input('Enter Value of n... '))
assert(n >= 0)
arr = [0] * (n + 1)
setPrimes(arr, n)
print('Prime numbers upto ', n, ' are as : ', end='')
printPrimes(arr, n)