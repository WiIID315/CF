n = int(input())
arr = list(map(int, input().split()))
correct = sorted(arr)

l, r = -1, -1
for i in range(n):
  if arr[i] != correct[i]:
    if l == -1:
      l = i
    r = i

if l == -1 and r == -1:
  print("yes")
  print(1, 1)
  exit()
arr[l:r+1] = arr[l:r+1][::-1]
for i in range(n):
  if arr[i] != correct[i]:
    print("no")
    exit()
print("yes")
print(l + 1, r + 1)
