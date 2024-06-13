#!/usr/bin/python3
"""
Write a function that prints a string in uppercase followed by a new line.
Prototype: def uppercase(str):
You can only use no more than 2 print functions with string format
You can only use one loop in your code
You are not allowed to import any module
You are not allowed to use str.upper() and str.isupper()
"""


def uppercase(str):
    for c in str:
        if ord(c) >= 97 and ord(c) <= 122:
            c = chr(ord(c), - 32)
            print("{}".format(c), end="")
