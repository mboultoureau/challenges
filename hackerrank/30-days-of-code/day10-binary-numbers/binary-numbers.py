#!/bin/python3

import math
import os
import random
import re
import sys


if __name__ == '__main__':
    n = int(input())

    binary = bin(n).replace("0b", "")

    maximum = 0
    streak = 0

    for i in range(0, len(binary)):
        if binary[i] == "1":
            streak = streak + 1
            if streak > maximum:
                maximum = streak
        else:
            streak = 0

    print(maximum)
