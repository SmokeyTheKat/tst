PREFIX=~/.local

all:
	gcc ./tst.c -o ./tst -Wall
install:
	cp ./tst ${PREFIX}/bin/
