for _ in range(int(input())):
  p, q = map(int, input().split())
  if p < q and min(p // 2, q // 3) >= q - p:
    print("Bob")
  else:
    print("Alice")
