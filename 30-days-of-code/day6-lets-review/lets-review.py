#!/bin/python3

if __name__ == '__main__':
    n = int(input())

    for i in range(0, n):
        word = input()

        odd = ""
        even = ""

        for j in range(0, len(word)):
            if j % 2 == 0:
                odd = odd + word[j]
            else:
                even = even + word[j]
            
        print(odd + " " + even)