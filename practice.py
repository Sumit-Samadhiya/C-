 # 1. Find the largest number among the three numbers.

# a=int(input("Enter a :- "))
# b=int(input("Enter b :- "))
# c=int(input("Enter c :- "))

# if(a>b):
#     if(a>c):
#         print(a)
# elif(b>c):
#     print(b)
# else:
#     print(c)

#2. Write a Program to check whether a number is prime or not.

# def prime(a):
#     for i in range(2,a):
#         if(a%i==0):
#             return False
        
#     return True
    

# a= int(input("Enter a Number :- "))

# if(prime(a)):
#     print("Prime Number")
# else:
#     print("Not a Prime no.")


# 4. Write a Program in C to Swap the values of two variables without using any extra variable.

# a=int(input("Enter number : ")) #10
# b=int(input("Enter number ")) #4
# a = a + b
# b = a - b
# a = a - b

# print(a,b)


# Reverse String
def reverse(a):
    return a[::-1]

a=input('')
b=reverse(a)
print(b)


