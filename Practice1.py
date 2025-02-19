# i= int(input('Enter :- '))
# if(i%2==0):
#     print('even')
# else:
#     print('odd')

# i= int(input('Enter :- '))
# unit=i%10
# print(unit)

# i=int(input('enter :-'))
# if(i>=100 and i<=999):
#     print("tree digit no")
# else:
#     print('Not a three digit no.')


# i=int(input('Enter'))
# j=int(input('Enter:- '))
# k=int(input('Number: '))
# m=max(i,j,k)
# print(m)


# for i in range(1,21):
#     if(i%2==0):
#         print(i)

# for j in range(1,21):
#     if(j%2!=0):
#         print(j)

# i=int(input('Enter'))
# for e in range(1,11):
#     t=e*i
#     print(t)

def fac(n):
    if n==0 or n==1:
        return 1
    else:
        return n*fac(n-1)
n=int(input('Enter '))
d=fac(n)
print(d)