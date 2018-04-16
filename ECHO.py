#!/usr/bin/python
# -*- coding: utf-8 -*-
import sys

## Lecture des données depuis l'entrée standard.
## Stockage des données dans une liste.
## Suppression des caractères d'espacement au début et à la fin de chaque chaîne avec strip.
x = [s.strip() for s in sys.stdin.readlines()]
## Suppression des chaines vides
x = filter( lambda s : len(s) > 0, x)

## Traitement des données 
## Ici, il n'y a rien à faire pour echo.
y = x

## Écriture du résultat sur la sortie standard
sys.stdout.write("\n".join(y))
