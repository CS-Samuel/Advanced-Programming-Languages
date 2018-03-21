taller(stringfellow, johnson).
taller(simpson, stringfellow).
taller(simpson, halverson).
taller(wei, simpson).
taller(passos, johnson).
shorter(wuthrich, simpson).
shorter(griffin, passos).
taller_than(A, B) :- taller(A, B); shorter(B, A).
taller_than(A, C) :- taller(A, B), taller_than(B, C).
shorter_than(A, B) :- taller_than(B, A).
