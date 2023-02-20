:- initialization(main).
main :- write('append').
append( [], X, X).
append( [X | Y], Z, [X | W]) :- append( Y, Z, W).
