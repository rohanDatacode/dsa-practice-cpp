def dec(func):
    def wrapper(*a , **ka):
        print("something")
        var=func(*a,**ka)
        return var
    return wrapper

@dec
def asdf():
    print("hellow world")

asdf()



def logger(func):
    def wrapper(*args, **kwargs):
        print(f"Calling {func.__name__} with {args} {kwargs}")
        return func(*args, **kwargs)
    return wrapper

@logger
def add(a, b):
    return a + b

print(add(2, 3))
