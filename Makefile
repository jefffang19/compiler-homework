all:
	bison -y -d test.y
	flex B053040017.l
	gcc *.c -ly -lfl

