#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  potega.py


def potega_it(podstawa, wykladnik):
    wynik = 1
    for i in range(0, wykladnik):
        wynik = wynik * podstawa
    return wynik

# potega_rek(a, 0) = 1 dla a różnego od 0
# potega_rek(a, n) = potega_rek(a, n - 1) * a dla n = N+


def potega_rek(a, n):
    if n == 0:
        return 1
    return potega_rek(a, n - 1) * a


def main(args):
    podstawa = float(input("Podaj podstawe potegi: "))
    wykladnik = int(input("Podaj wykladnik potegi: "))
    print("Wynik: ", potega_it(podsawa, wykładnik))
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
