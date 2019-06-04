all:
	bison -y -d B053040017.y
	flex B053040017.l
	gcc lex.yy.c y.tab.c -ly -lfl
clean:
	rm -f a.out lex.yy.c y.tab.c y.tab.h

