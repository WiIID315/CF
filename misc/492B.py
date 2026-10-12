n, l = map(int, input().split())
lamps = list(map(int, input().split()))
lamps.sort()

ans = max(lamps[0], l - lamps[-1])
for i in range(n - 1):
  ans = max(ans, (lamps[i + 1] - lamps[i]) / 2)
print(ans)
