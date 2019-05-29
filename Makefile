all:
	bison -y -d test.y
	flex B053040017.l
	gcc *.c -ly -lfl
clean:
	rm -f a.out lex.yy.c y.tab.c y.tab.h

