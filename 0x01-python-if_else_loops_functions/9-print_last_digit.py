#!/usr/bin/python3
def print_last_digit(number):
    lastdigit = number % 10
    if number < 0:
        print(-(lastdigit), end='\n')
    else:
        print(lastdigit, end='\n')
    return lastdigit
