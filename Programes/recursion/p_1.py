# Write a recursion function to calculate the sum of n natural numbers:
def sum_natural(n):
    if(n==0):
        return 0
    return sum_natural(n-1) + n
sum = sum_natural(5)
print(sum)
