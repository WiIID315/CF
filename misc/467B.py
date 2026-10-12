n, m, k = map(int, input().split())
players = []
for _ in range(m):
  players.append(int(input()))
fedor = int(input())
friends = 0
for p in players:
  if (p ^ fedor).bit_count() <= k:
    friends += 1
print(friends)
