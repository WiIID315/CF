n, m = map(int, input().split())
if(m > n):
  print(0, 0)
  exit()

a = n - m + 1
best = a * (a - 1) // 2

offset = n % m
per_group = n // m;
worst = (m - offset) * per_group * (per_group - 1) // 2
worst += offset * per_group * (per_group + 1) // 2

print(worst, best)
