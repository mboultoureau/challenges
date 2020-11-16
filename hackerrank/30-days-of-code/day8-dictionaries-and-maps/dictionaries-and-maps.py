#!/bin/python3

from sys import stdin

if __name__ == '__main__':
    phonebook = {}

    n = int(input())

    for i in range(0, n):
        inp = input().split(" ")
        phonebook[inp[0]] = inp[1]

    for search in stdin:
        search = search.rstrip()

        if search in phonebook:
            print(search + "=" + phonebook[search])
        else:
            print("Not found")
