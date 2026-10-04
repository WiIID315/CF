def solve():
  n = int(input())
  a = list(map(int, input().split()))
  b = list(map(int, input().split()))
  xor = [False] * n
  for i in range(n - 1):
    if a[i] == b[i]:
      continue
    if a[i] ^ a[i + 1] == b[i]:
      a[i] = b[i]
      xor[i] = True
  for i in range(n - 2, -1, -1):
    if a[i] == b[i]:
      continue
    if a[i] ^ a[i + 1] == b[i] and not xor[i]:
      a[i] = b[i]
      xor[i] = True
  for i, j in zip(a, b):
    if i != j:
      print("NO")
      return
  print("YES")
      

for _ in range(int(input())):
  solve()
