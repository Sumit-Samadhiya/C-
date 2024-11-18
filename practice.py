 # 1. Find the largest number among the three numbers.

# a=int(input("Enter a :- "))
# b=int(input("Enter b :- "))
# c=int(input("Enter c :- "))

# s=max(a,b,c)
# print(s)

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



#  5.  Reverse String
# def reverse(a):
#     return a[::-1]

# a=input('')
# b=reverse(a)
# print(b)



# 6. Fiboonacci Print
# def fibonacci(r):
#     a=-1
#     b=1

#     for i in range(r):
#         c=a+b
#         print(c)
#         a=b
#         b=c
# fibonacci(5)

# # Palindrome Check String.

# def Fun(a):
#     return a == a[::-1]

# a=input('Enter a String : ')
# if(Fun(a)):
#     print('Palindrome')
# else:
#     print('not a palindrome')


# Count Vowels and Consonants

# def countt(a):
#     v='aeiouAEIOU'
#     count=0
#     const=0
#     for c in a:
#         if c in v:
#             count=count+1
#         else:
#             const=const+1
#     print('Vowel= ',count)
#     print('constant= ',const)

# countt('Sumit')


# reverse a number

# def reverse(a):
#     r=0
#     while(a):
#         r=r+a%10
#         a=a//10
#         r=r*10
#     r=r//10
#     print(r)
# reverse(124)

# def reverse(a):
#     r = a[::-1]
#     s= int(r)
#     sq= int(a)
#     if(sq==s):
#         print('palindrom')
#     else:
#         print('not')

# reverse('13131')
    
# Write a Python program to find the factorial of a number. 
# def factorial(number):
#     return number * factorial(number-1)

# r=factorial(5)
# print(r)



# maximum number
# def maximum(number):
#     max= number[0]

#     for i in number:
#         if i>max:
#             max=i
#     return max

# number=[2,44,3,55,2]
# r=max(number)
# print(r)



# sum or Average of a list
# def avg(n):
    
#     total=sum(n)
#     average= total/len(n)

#     print(average)

# n=[1,2,3,4,5]
# avg(n)


# Find SubString in Text

# def find(string,sub):
#     if sub in string:
#         print('yes')
#     else:
#         print('no')

# s= "You are Cool"
# sub= "are"
# find(s,sub)


# Reverse a List
# def rev(n):
#     for i in reversed(n):
#         print(i)
# n=(1,2,3,4)
# print(n[::-1])
# rev(n)


#Remove duplicate
# n=[1,2,3,4,5,5,6,6]
# unique=set(n)
# print(unique)





# def fibonacci(n):

# # """Calculates the nth Fibonacci number (example function to memoize)."""

#   if n == 0 or n == 1:
#    return n

#   else:

#    return fibonacci(n-1) + fibonacci(n-2)

# # Example usage

# result = fibonacci(7)  # Memoization avoids redundant calculations

# print(f"Fibonacci of 35: {result}")


# n="Sama is cool"

# s=len(n.split(' '))
# print(s)



