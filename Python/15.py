# Write a python program to swap 2 values without using third variable (Use + and -)
a = 10
b = 20

print(f"The value of a before swapping = {a}")
print(f"The value of b before swapping = {b}")

a = a + b
b = a - b
a = a - b

print(f"The value of a after swapping = {a}")
print(f"The value of b after swapping = {b}")