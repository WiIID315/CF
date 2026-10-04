def solve():
  n, k = map(int, input().split())
  target = n ^ k
  # print(1 << (n.bit_length()))
  # print(target)
  if target >= 1 << (n.bit_length()):
    print("NO")
    return
  ans = []
  if target >= n:
    bits = []
    val = 0
    shift = 0
    for i in range(n):
      if i == 1 << shift:
        if target & (1 << shift):
          bits.append(i)
          val |= i
        else:
          ans.append(i)
        shift += 1
      else:
        ans.append(i)
      
    if val != target:
      print("NO")
      return
    ans.reverse()
    ans += bits
    print("YES")
    print(*ans)
    return
  for i in range(n - 1, -1, -1):
    if i != target:
      ans.append(i)
  if target != n:
    ans.append(target)
  print("YES")
  print(*ans)

for _ in range(int(input())):
  solve()
