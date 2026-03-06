# n = int(input("Type in Num: "))
n = int(input())

# setting
INF = 10**9
dp = [INF] * (n + 1)    # set max for all kgs
dp[0] = 0               # at 0kg => 0 bags needed

for kg in range(1, n+1):
    if kg >= 3:
        dp[kg] = min(dp[kg], dp[kg - 3] + 1)       # -3kg's bag num + 1
    if kg >= 5:
        dp[kg] = min(dp[kg], dp[kg - 5] + 1)       # -5kg's bag num + 1

print(dp[n] if dp[n] != INF else -1)