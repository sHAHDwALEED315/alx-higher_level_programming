#!/usr/bin/python3
def print_last_digit(number):
    lastdigit = number % 10
    if number < 0:
        print(-(lastdigit))
        return -lastdigit 
    else:
        print(lastdigit)
        return lastdigit
