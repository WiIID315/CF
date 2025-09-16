from collections import Counter

def solve():
	n, k = map(int, input().split())
	subarrays = 0;
	freq = Counter(map(int, input().split()))
	print(freq)
	for _, v in freq.items():
		print(k, v);
		if v % k == 0:
			subarrays += v * (v + 1) / 2
		else:
			print(0)
			return
	print(int(subarrays))

if __name__ == "__main__":
	t = int(input())
	for _ in range(t):
		solve()