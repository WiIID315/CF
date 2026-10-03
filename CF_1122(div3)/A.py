t = int(input())
for _ in range(t):
	n = int(input())
	a, b, c = map(int, input().split())
	print(n - min(a, b, c))