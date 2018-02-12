#lang racket

; Lit jusqu'à n données sur l'entrée standard. Si le paramètre n est omis, la
; lecture se poursuit jusqu'au caractère fin de fichier.
;
; Pour rappel, une donnée est n'importe quelle valeur valide en Racket : entier,
; caractère, chaînes de caractères, listes, symbole... Le format doit respecter
; la norme du langage (cf fonctions read et write). 
(define (read-data [n +inf.0])
  ; test pour savoir si on doit lire une donnée
  (if (> n 0) 
      ; lecture de la donnée
      (let ([datum (read)])
        ; vérification de la validité de la donnée
        (if (eof-object? datum) 
            ; la fin de fichier est atteinte, aucune donnée disponible
            ; la liste vide est renvoyée
            empty
            ; ajout de la donnée au résultat de l'appel récursif
            (cons datum (read-data (- n 1)))))
      ; pas de donnée à lire, la liste vide est renvoyée
      empty))

; Affiche ligne par ligne sur la sortie standard une liste de données Racket.
(define (print-data L)
  ; Pour chaque donnée de la liste
  (for ([datum (in-list L)])
    ; Afficher la donnée et sauter une ligne
    (printf "~s~n" datum)))

; Lit les données présentes sur l'entrée standard et les affiches ligne par
; ligne sur la sortie standard
(define (echo)
  (print-data (read-data)))

; Fin des définitions, point d'entrée du programme.
(echo)
