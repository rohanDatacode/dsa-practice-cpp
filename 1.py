# print("ROHAN VERMA")
# print("✅ Python is working!")



import time

def fibonacci(n):
    if n <= 1:
        return n
    return fibonacci(n - 1) + fibonacci(n - 2)

start = time.time()
print(f"Fibonacci(35) = {fibonacci(35)}")
end = time.time()
print(f"⏱ Time taken: {end - start:.2f} seconds")
