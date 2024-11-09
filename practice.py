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
    
