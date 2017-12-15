#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
# rekurencje5.py
#


def ciag_rek(n):
    if n == 0:
        return 0
    return ciag_rek(n - 1) + 1 + (n - 1) * 2


def main(args):
    n = int(input("Który wyraz ciągu? "))
    print(ciag_rek(n))
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
