"""
OOPS :-

    - class 
    - object
    - Abstraction
    - Encapsulation
    - Inheritaance
    - Polymorphism 
    
    magic mathod , dunder 




"""



# class class1:
#     def __init__(self): 
#        pass
#     id=10
#     name='qudgb'
# obj=class1() 


# def func(self):
#     pass

# def func (self , a):
#     self.a = a


# class person:
#     def __init__(self , fname , lname):
#         self.firstname=fname
#         self.lastname=lname

#     def printname(self):
#         print(self.firstname , self.lastname) # type: ignore

# x=person("rohan","verma") # type: ignore
# x.printname()


# import math


# class Circle:
    
#     def __init__(self, radius):
#         self.radius = radius
    
   
#     def calculate_circle_area(self):
#         return math.pi * self.radius**2
    
    
#     def calculate_circle_perimeter(self):
#         return 2 * math.pi * self.radius


# radius = float(input("Input the radius of the circle: "))
# circle = Circle(radius)
# area = circle.calculate_circle_area()
# perimeter = circle.calculate_circle_perimeter()

# print("Area of the circle:", area)
# print("Perimeter of the circle:", perimeter) 



class calculator :
    def add(self , x , y):
        return x+y
    
    def sub(self , x , y):
        return x-y 
    
        
    def multiply(self , x , y):
        return x*y
    
    def devision (self , x , y):
        if y!=0:
            return x/y
        else :
            print("can't devision by 0")
object=calculator(x,y)

result=calculator()





   
