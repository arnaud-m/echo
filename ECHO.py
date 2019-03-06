#!/usr/bin/python3
# -*- coding: utf8 -*-
import fileinput
import sys

# Lecture des données depuis l'entrée standard
# Documentation pour fileinput.input() :
# This iterates over the lines of all files listed in sys.argv[1:],
# defaulting to sys.stdin if the list is empty.

# On récupère les lignes de l'entrée en supprimant les caractères blancs :
entree_str = [line.strip() for line in fileinput.input()]
# On supprime les lignes vides :
entree_str = filter(lambda s : len(s) > 0, entree_str)

# Conversion de l'entrée en entiers :
entree_int = [int(s) for s in entree_str]

# Traitement sur l'entree, ici aucun :

# Affichage :
# Attention, "print" ajoute par défaut un caractère '\n'
# Pour l'éviter : print(var_ou_str, end='')
for n in entree_int :
    print(n,file=sys.stdout)
