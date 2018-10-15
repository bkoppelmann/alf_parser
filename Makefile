
all:
	antlr4 -Dlanguage=Cpp -no-listener -visitor -o gen/ grammar/ALF.g4
