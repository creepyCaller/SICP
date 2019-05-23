#lang Scheme
(define (inc a) (+ a 1))
(define (dec a) (- a 1))
(define (add a b)
  (if (= a 0)
      b
      (inc (add (dec a) b))))

(add 4 5)
