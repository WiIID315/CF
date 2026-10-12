n, m = map(int, input().split())
prev = 1
total = 0
arr = list(map(int, input().split()))
for house in arr:
  total += ((house + n) - prev) % n
  prev = house
print(total)
