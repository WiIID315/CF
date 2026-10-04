for _ in range(int(input())):
  n = int(input())
  a = input()
  b = input()

  ao, ae = [], []
  bo, be = [], []

  for i in range(n):
    if a[i] == '1':
      if i % 2 == 0:
        ae.append(i // 2)
      else:
        ao.append(i // 2)
  for i in range(n):
    if b[i] == '1':
      if i % 2 == 0:
        be.append(i // 2)
      else:
        bo.append(i // 2)
  if len(ao) != len(bo) or len(ae) != len(be):
    print(-1)
    continue
  total = sum((abs(x - y) for x, y in zip(ae, be))) + sum((abs(x - y) for x, y in zip(ao, bo)))
  print(total)
