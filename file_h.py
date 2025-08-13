"""
file handling -
    - r    w     a 
    r+     w+    a+
    rb     wb    ab
    rb+    wb+   ab+

"""

# var=open('<file_name>', 'am')

# var.close()


# with open("example.txt", "r") as f:
#     content = f.read()
#     print(content)




# # First: write content to the file
# with open("example.txt", "w") as f:
#     f.write("This is content written from the program.\n")

# # Then: read it back
# with open("example.txt", "r") as f:
#     content = f.read()
#     print(content)

# Append mode: 'a'
# with open("example.txt", "a") as f:
#     f.write("This is a new line being appended.\n")

# print("Content appended successfully.")



# Define a function named divide_numbers that takes two parameters: x and y.
def divide_numbers(x, y):
    try:
        # Attempt to perform the division operation and store the result in the 'result' variable.
        result = x / y
        # Print the result of the division.
        print("Result:", result)
    except ZeroDivisionError:
        # Handle the exception if a division by zero is attempted.
        print("The division by zero operation is not allowed.")

# Usage
# Define the numerator and denominator values.
numerator = 100
denominator = 0
# Call the divide_numbers function with the provided numerator and denominator.
divide_numbers(numerator, denominator)

