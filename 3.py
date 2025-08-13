
# # print the table

# # for i in range(1, 11,2):
# #     # i*2
# #     print(i)


# # normal addition

# # a=5
# # b=10
# # print(a+b)


# # checking the divisible by 7 and multiple of 5


# for i in range (1500 , 2701):

#     if ((i % 7 == 0) and(i % 5==0)):

#         print (i)



# # Write a Python program to convert temperatures to and from Celsius and Fahrenheit.


#     # c = float(input("Enter temperature in Celsius: "))
#     # f = (c * 9/5) + 32
#     # print(f"{c}°C = {f:.2f}°F")


#     # f = float(input("Enter temperature in Fahrenheit: "))
#     # c = (f - 32) * 5/9
#     # print(f"{f}°F = {c:.2f}°C")



# # Write a Python program to guess a number between 1 and 9.

# # Note : User is prompted to enter a guess. If the user guesses wrong then the prompt appears again until the guess is correct, on successful guess, user will get a "Well guessed!" message, and the program will exit.



# target= 5

# for i in range (1,10):

#     inputt =  int (input("enter the guezsing number"))
     

#     if (target == inputt):

#         print (" well guessed")


#     else :
#         print ( " try other number ")

   

# diamond pattern



s_str='hello'

# what do u mean & difference by shallow copy and deep copy ( imp...)

# var = 'r'
# var_2 = var+s_str[1:]
# print(var+s_str[1:])



#properties of list 1.) mutable  2.) dynamic 3.) indexable 



# mytuple = ( " rohan ", " dheeraj " , " and all ")


# print(mytuple)

# mutable_in_tuple = ([1, 2], 'a', {'key': 'value'})

# mutable_in_tuple[0].append(3) # Modify the list inside the tuple

# mutable_in_tuple[2]['new_key'] = 'new_value' # Modify the dictionary inside the tuple

# print(mutable_in_tuple)






# set : mutable , unorderred , undifined memory location , 


# database : need to explore filter query 



# Write a Python program to calculate the length of a string.

# string1='rohan'
# print(len(string1))

# Write a Python program to sum all the items in a list.

# def sum_list(items):
#     sum_number = 0
#     for x in items:
#         sum_number += x
#     return sum_number

# print(sum_list([1, 2, 3]))

"""

functions : 

   -built in funtion 
   -user defined
        - defauly
        - keyword
        - MULTIVALUED
        - keyword multivalued
   -anonymous
   -higher order
        - Generator
        - Decorator



"""



# def funct(**a):

#     print (type (a))
# funct(a=1 ,b=2 ,c= 3 ,d=4 ,e= 5 )


# var = lambda <para> : code block 

var1 = lambda a : a+5
var1 (2)


# Write a Python function to find the maximum of three numbers.

def funct(a , b , c ):
    if a>b and a>c : 
        print(a)

    elif  b>c and a>c:
        print(b)

    else :
        print(c)

funct(8 , 5 ,3)
    

# Write a Python function to sum all the numbers in a list.


def sum_list(items):
    sum_number = 0
    for x in items:
        sum_number += x
    return sum_number

print(sum_list([1, 2, 3]))

# Write a Python function to multiply all the numbers in a list.


def mult_list(items):
    mult_number=1
    for y in items:
        mult_number *= y
    return mult_number

print(mult_list([2,3,1])) # type: ignore


# Write a Python program to reverse a string.

def string_reverse ( str1):
    rest1=''
    index = len(str1)
    while index>0:
        rest1+=str1[index-1]
        index=index-1
    return rest1
print(string_reverse ('gbgig3743b') )



# Write a Python function to calculate the factorial of a number (a non-negative integer). 
# The function accepts the number as an argument.



# def fact(n):
#     if n==0:
#        return 1 

#     else :
#        return n*fact(n-1)
    
# n=int(input("enter the number for factorial"))

# print(fact(n))



  



    

   


    

    
 



    
