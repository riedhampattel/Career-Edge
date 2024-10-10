#Take a list from the user and ask for an element which you want to delete from a list if that element is present in the list than print list after removing that list oherwise display error message "Element is not present in a list"
a = []
size = int(input("Enter the size of a list = "))

for i in range(1,size+1) :
    x = int(input("Enter any number = "))
    a.append(x)

print(a)

rmv = int(input("Enter an element which you want to remove = "))

if rmv in a :
    a.remove(rmv)
    print(a)
else:
    print("Element is not present in a list")