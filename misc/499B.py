n, m = map(int, input().split())
translate = dict()
for _ in range(m):
  a, b = input().split()
  if len(a) <= len(b):
    translate[b] = a
  else:
    translate[a] = b

ans = []
words = list(input().split())

for word in words:
  ans.append(translate.get(word, word))
print(*ans)
