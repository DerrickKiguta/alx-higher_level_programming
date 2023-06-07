#!/usr/bin/python3
def print_last_digit(number):
    if number < 0:
        new_number = abs(number)
        answer = new_number % 10
        print(answer, end="")
        return answer
    else:
        answer = number % 10
        print(answer, end="")
        return answer
