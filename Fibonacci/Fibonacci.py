def recursiveFibonacci(n, memo):
    if memo[n] is not None:
        return memo[n]
    if n == 1 or n == 2:
        result = 1
    else:
        result = recursiveFibonacci(n-1, memo) + recursiveFibonacci(n-2, memo)
    memo[n] = result
    return result


def BottomTopFibonacci(n):
    if n == 1 or n == 2:
        return 1
    bottom_up = [None] * (n+1)
    bottom_up[1] = 1
    bottom_up[2] = 1
    for i in range(3, n+1):
        bottom_up[i] = bottom_up[i-1] + bottom_up[i-2]
    return bottom_up[n]


def NormalFibonacci(n):
    if n == 1 or n == 2:
        result = 1
    else:
        result = NormalFibonacci(n-1) + NormalFibonacci(n-2)
    return result


if __name__ == "__main__":
	n = int(input("Enter the Fibonacci Step: "))
	memo = [None] * (n + 1) ## [None,None,None<none]
	print(BottomTopFibonacci(n))


## 1 1 2 3