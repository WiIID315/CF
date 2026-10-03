for _ in range(int(input())):
	n = int(input())
	s = input()
	if(s[0] == '1'):
		print(s.count('0'))
		continue
	prefix = [0] * n
	suffix = [0] * n
	for i in range(n):
		prefix[i] += prefix[i - 1]
		if s[i] == '1':
			prefix[i] += 1

	for i in range(n - 1, -1, -1):
		if i != n - 1:
			suffix[i] += suffix[i + 1]
		if s[i] == '0':
			suffix[i] += 1
	ans = float('inf')
	for i in range(n):
		left = 0 if i == 0 else prefix[i - 1]
		right = 0 if i == n - 1 else suffix[i + 1]
		ans = min(ans, left + right)
	print(ans)
