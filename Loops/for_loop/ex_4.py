list = [1,4,5,8,5,34,11,23]
x = 11
idx = 0
for i in list:
    if(i == x):
        print("number found at idx", idx)
        break
    idx += 1