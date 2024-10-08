#Write a Python program to guess a number between 1 and 9.
#Note : User is prompted to enter a guess. If the user guesses wrong then the prompt appears again until the guess is correct, on successful guess, user will get a "Well guessed!" message, and the program will exit.

import random

score = 0
for i in range(1,11) :
    x = random.randint(1,10)
    y = int(input("Guess a number = "))
    if x==y :
        print("Well guessed")
        score = score + 1
print("Final score = ",score)