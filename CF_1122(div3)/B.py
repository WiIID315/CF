for _ in range(int(input())):
	a, b, c = map(int, input().split())
	if a >= b:
		print(a + c - b)
	elif c > 2 * (b - a):
		print(a + c - b)
	else:
		print(b - a)