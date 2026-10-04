def solve():
  n = int(input())
  tasks = []
  for _ in range(n):
    tasks.append(list(map(int, input().split())))

  if(n == 1):
    print(tasks[0][0])
    return
  dp = [0] * n
  dp[n - 1] = tasks[-1][0]
  for i in range(n - 2, -1, -1):
    dp[i] = max(dp[i + 1], dp[i + 1] * (1 - tasks[i][1] / 100) + tasks[i][0])
  print(dp[i])

for _ in range(int(input())):
  solve()
