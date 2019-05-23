#lang scheme
(define (new-if predicate then-clause else-clause)
  (cond (predicate then-clause)
        (else else-clause)))
  
(new-if (= 1 1) 1 0)
(new-if (< 1 1) 1 0)