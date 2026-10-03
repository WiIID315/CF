import sys

def solve():
	input = sys.stdin.readline
	n = int(input())
	arr = list(map(int, input().split()))
	counter = dict()
	for i, val in enumerate(arr):
		counter[val - i] = 0
	ans = 0
	for keys in sorted(counter):
		counter[keys] = counter.get(keys - 1, 0) + 1
		ans = max(ans, counter[keys])
	print(ans)


for _ in range(int(input())):
	solve()