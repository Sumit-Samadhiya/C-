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


# for num in range(1,200):
#     is_prime=True
#     for i in range(2,num):
#         if num%i==0:
#             is_prime=False
#             break
#     if is_prime:        
#         print(num)


# def is_prime(n):
#     for i in range (2,n):
#         if n%i==0:
#             return False
#     return True
# for i in range(1,50):
#     if is_prime(i):
#         print(i)
    

# def fibo(n):
#     f=[0,1]
#     for i in range(2,n):  
#      r=f[i-1]+f[i-2]
#      f.append(r)  
#     return f
# print(fibo(5))


# s=[1,2,3,4]
# print(s[::-1])

# s="Sumit samadhiya"
# r= len(s.split())
# print(r)



# #  map
# l= [1,2,3,4,5]
# n= map(lambda x: x+10,l)
# print(list(n))

# # Filter
# l=[1,2,3,4,5,6]
# n=filter(lambda x: x%2 == 0,l)
# print(list(n))

#Reduce
# from functools import reduce 
# l=[1,2,3,4,5]
# n=reduce(lambda x,y: x*y,l)
# print(n)


# Write a Python function that generates the Fibonacci sequence up to a given number of terms. The Fibonacci sequence is a series of numbers in which each number is the sum of the two preceding ones, starting from 0 and 1. That is: 0, 1, 1, 2, 3, 5, 8, 13, 21, .... The function should return a list containing the sequence up to the specified number of terms.
# If the input is n = 0, the function should return an empty list [].
# If the input is n = 1, the function should return [0].
# If the input is n = 2, the function should return [0, 1].
# Example 1:
# Input: 5
# Output: [0, 1, 1, 2, 3]
# Example 2:
# Input: 8
# Output: [0, 1, 1, 2, 3, 5, 8, 13]

# class Solution:
#     def fibonacci(self, n: int) -> List[int]:
#         # your code here
#         l=[0,1]
#         for i in range(2,n):
#              x= l[i-1]+l[i-2]
#              l.append(x)
        
#         return l


# Write a Python function that calculates the factorial of a given number. The factorial of a non-negative integer n is the product of all positive integers less than or equal to n. It is denoted as n!. For example, the factorial of 5 (5!) is 5 * 4 * 3 * 2 * 1 = 120. The factorial of 0 is defined as 1.
# Example 1:
# Input: 5
# Output: 120
# Example 2:
# Input: 3
# Output: 6
# The function should return the factorial of the given number.

# class Solution:
#     def factorial(self, n: int) -> int:
#         # your code here
#         if n == 0 or n == 1:
#             return 1
#         return n * self.factorial(n-1)


# Write a Python function that checks whether a given number is prime. A prime number is a positive integer greater than 1 that is only divisible by 1 and itself. The function should return True if the input number is prime and False otherwise.
# Example 1:
# Input: 5
# Output: True
# Example 2:
# Input: 10
# Output: False
# The function should return True if the input number is prime and False otherwise.

# class Solution:
#     def is_prime(self, n: int) -> bool:
#         # your code here
#         for i in range(2,n):
#             if(n%i==0):
#                 return False
#         return True


# Write a Python function that reverses a given string. The program should take a string as input and return its reverse. Implement the function such that it operates in O(n) time complexity and O(1) space complexity (ignoring the space required to store the result). This means the function should reverse the string in-place if possible, or use the minimum additional space necessary.
# Example 1:
# Input: "hello" 
# Output: "olleh"
# Example 2:
# Input: "Python"
# Output: "nohtyP"
# The function should return the reversed string.

# class Solution:
#     def reverse_string(self, s: str) -> str:
#         # your code here
#        return s[::-1]


# Write a Python function that checks whether a given string is a palindrome. A palindrome is a word, phrase, number, or other sequence of characters that reads the same forward and backward, ignoring non alphanumeric characters, punctuation, and capitalization.
# Example 1:
# Input: "racecar" 
# Output: True
# Example 2:
# Input: "techprep" 
# Output: False
# The function should return True if the input string is a palindrome (reads the same forward and backward), and False otherwise

# class Solution:
#     def is_palindrome(self, s: str) -> bool:
#         # your code here
      
#         return s==s[::-1]

# # Question 1: Write a Python program to check if a string is a palindrome.

# def palindrome(n):
#     return n==n[::-1]

# n=input('Enter ')
# if(palindrome(n)):
#     print('palindrome')
# else:
#     print('not palindrome')


# # Question 2: Write a Python program to find the factorial of a number.
# def fun(n):
#     if n==0 or n==1:
#         return 1
#     else:
#         return n*fun(n-1)
# r=fun(5)
# print(r)


# def factorial(number):
#     if number == 0 or number == 1:
#         return 1
#     else:
#         return number * factorial(number - 1)
# r=factorial(5)
# print(r)

# Question 3: Write a Python program to find the largest element in a list.

# n= [1,2,3,8,5,6]
# r= max(n)
# print(r)

# def find_largest(numbers):
#     largest = numbers[0]
#     for num in numbers:
#         if num > largest:
#             largest = num
#     return largest

# # Test the function
# nums = [10, 5, 8, 20, 3]
# largest_num = find_largest(nums)
# print(f"The largest number is {largest_num}")