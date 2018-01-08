#!/usr/bin/env python
# -*- coding: utf-8 -*-


from math import floor


def wyszukiwanie_liniowe(l, e):
    for i in range(0, len(l)):
        if l[i] == e:
            return i
    return -1  # liczba mniejsza od zera jest poprawna


def wyszukiwanie_binarne(l, e):
    lewy, prawy = 0, len(l) - 1  # 0 bo to krańcvowe po lewej stronie
    while lewy < prawy:
        srodek = floor((lewy + prawy) / 2)
        print(srodek)
        if e <= l[srodek]:
            prawy = srodek
        else:
            lewy = srodek + 1

    if l[lewy] == e:
        return lewy:  # element znaleziono

    return -1  # olementu nie znaleziono


def wyszukiwanie_bin_rek(lewy, prawy, lista, el):
    if lewy > prawy:
        return -1  # elementu nie znaleziono

    srodek = floor((lewy + prawy) / 2)
    if el == lista[srodek]:
        return srodek  # element znaleziono

    if el < lista[srodek]:
        return wyszukiwanie_bin_rek(lewy, srodek - 1, lista, el)
    else:
        return wyszukiwanie_bin_rek(prawy, srodek + 1, prawy, lista, el)


def main(args):
    lista = [4, 3, 7, 0, 2, 3, 1, 9, -4]
    el = 2
    print(wyszukiwanie_liniowe(lista, el))
    lista.sort()
    print(wyszukiwanie_binarne(lista, el))


if __name__ == '__main__':
    import sys
sys.exit(main(sys.argv))
