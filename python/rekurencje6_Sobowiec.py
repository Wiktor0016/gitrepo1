#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
# rekurencje6.py
#


def euk_rek(a, b):
    if b == 0:
        return a
    return euk_rek(b, a % b)


def main(args):
    a = int(input("Podaj liczbę naturalną: "))
    b = int(input("Podaj liczbę naturalną: "))
    assert euk_rek(5, 10) == 5
    assert euk_rek(11, 33) == 11
    print("NWD({:d}, {:d}) = {:d}".format(a, b, euk_rek(a, b)))
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
