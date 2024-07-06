# Write a recursion function to print all elemenet in a list.
def print_list(list, idx=0):
    if(idx == len(list)):
        return
    print(list(idx))
    print_list(list, idx+1)

fruits = ["mango","banana","apple"]  
print_list(fruits)  