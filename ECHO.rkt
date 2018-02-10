#lang racket

(define (echo)
  (define n (read))
  (when (not (eof-object? n))
    (printf "~a~n" n)
    (echo)))

(echo)