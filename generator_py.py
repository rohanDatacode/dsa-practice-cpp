"""
Generator



"""

# def count_up_to(n):
#     i = 0
#     while i <= n:
#         yield i
#         i += 1

# # Using the generator

# for num in count_up_to(5):
#     print(num)



def generate_numbers():
    yield 1
    yield 2
    yield 3

for num in generate_numbers():
    print(num)


#print the even number 

def even_number(n):
    i=0
    while i<=n:
        if i%2==0:
          yield i
        i += 1

for num in even_number(6):
    print(num)

# Write a generator function that yields squares of numbers from 1 to n.


def sqr_number(n):
  for num in rang(1 , n+1): # type: ignore
    yield num*num 

 
    






    
            