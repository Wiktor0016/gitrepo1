# !/usr/bin/env python
# -*- coding: utf-8 -*-
#
# sort_wst.py

from random import random

def sort_wst(lista):
    for i in range(1, len(lista)):
        el = lista[i]
        k = i - 1
        while k >= 0 and lista[k] > el:
            lista[k+1] = lista[k]
            k -= 1
        lista[k+1] = el
    return lista

def sort_wst_bin(lista):
    for i in range(1, len(lista)):
        el = lista[i]
        k = szukaj_bin(0, i, lista, el) # wyszuk. bin. indeksu do wstawiania el
        pass



def main(args):
    lista = [4, 3, 7, 0, 2, 3, 1, 9]
    print(lista)
    print(sort_wst(lista))
    return 0

if __name__ == '__main__':
    import sys
sys.exit(main(sys.argv))
