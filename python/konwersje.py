#!/usr/bin/env python
# -*- coding: utf-8 -*-


def konwersja1(liczba10, podstawa):
    """Funkcja zmiania liczbę dziesiętną na system o podanej podstawie"""

    liczba = []  # lista reszt
    while liczba10 != 0:
        reszta = liczba10 % podstawa  # obliczanie reszt z dzielenia
        if reszta > 9:
            reszta = chr(reszta + 55)
        liczba.append(str(reszta))
        liczba10 = liczba10 / podstawa
        liczba10 + int(liczba10 / podstawa)

    liczba.reverse()  # odwrócenie kolejności elementów
    return "".join(liczba)  # złączenie elementów listy


def konwersja2(liczba, podstawa):
    """
    Funkja konwetuje podaną liczbę w systemie o podanej podstawie na system dziesiętny
    """

        liczba10 = 0  # warość dziesiętna liczby
        potega = len(liczba) - 1
        for cyfra in liczba:
            if not cyfra.isdigit():
                liczba10 += (ord(cyfra.upper()) - 55) * (podstawa ** potega)
            else:
                liczba10 += int(cyfra) * (podstawa ** potega)
            potega -= 1
        return liczba10


def dec2other():
    """Funkcja zmienia liczbę dziesiętną na system o podanej podstawie"""

    liczba = int(input("Podaj liczbę:"))
    podstawa = int(input("Podaj podstawę:"))
    while podstawa < 2 or podstawa > 16:
        podstawa = int(input("Podaj podstawę:"))
    print("Wynik konwersji: {}(10) = {}({})".format(
        liczba, konwersja1(liczba, podstawa), podstawa))


def main(args):
    print("Zmiana liczby dziesiętnej na liczbę o podanej podstawie"
          "<2;16> lub odwrotnie.")
    dec2other()
    other2dec()
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
