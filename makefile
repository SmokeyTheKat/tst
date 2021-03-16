all:
	gcc ./tst.c -o ./tst -Wall
install:
	sudo cp ./tst /usr/bin/
