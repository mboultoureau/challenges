#!/bin/python3

import math
import os
import random
import re
import sys

size = 6

if __name__ == '__main__':
    arr = []

    for _ in range(6):
        arr.append(list(map(int, input().rstrip().split())))

    # The maximum can be negative
    maximum = -math.inf

    for i in range(1, size - 1):
        for j in range(1, size - 1):
            # First line
            r = arr[i - 1][j - 1] + arr[i - 1][j] + arr[i - 1][j + 1]
            # Middle
            r = r + arr[i][j]
            # Last line
            r = r + arr[i + 1][j - 1] + arr[i + 1][j] + arr[i + 1][j + 1]

            if r > maximum:
                maximum = r

    print(maximum)
