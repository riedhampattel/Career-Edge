#Write a Python program to count the number of even and odd numbers in a series of numbers
#Sample numbers : numbers = (1, 2, 3, 4, 5, 6, 7, 8, 9) 
number = []
even = 0
odd = 0
cnt = int(input("Enter the count of numbers = "))
for i in range(1,cnt+1) :
    x = int(input("Enter any number = "))
    number.append(x)

print(number)

for a in number :
    if a%2==0 :
        even = even + 1
    else :
        odd = odd + 1
print("Even number count = ",even)
print("Odd number count = ",odd)