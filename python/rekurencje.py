#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  rekurencje.py
#  a1 = 1
#  a2 = 2
#  an = a(n - 1) + 2n + n(a-2)


def ciag_rek(n):
    if n == 1:
        return 1
    return ciag_rek (n - 1) + n + n(a-1)

def main(args):
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
