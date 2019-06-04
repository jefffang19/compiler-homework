# compiler-homework
Simple Java -- Parser

flex 2.6.4
bison (GNU bison) 3.0.4
ubuntu 18.04

How to Run:
1.	make
2.	./a.out < [input file]

你/妳如何處理這份規格書上的問題:
我大部分的判斷和輸出都是在yacc作，Lex只當scanner，負責回傳token而已。
Yacc的文法都是我參考規格書或者自己想的

你/妳寫這個作業所遇到的問題：
1.輸出格式跑掉
2.文法時常碰到ambigious，debug蠻辛苦的
3.判斷使用的id是否存在，除了現在的scope，還要包括上一層....直到global

所有測試檔執行出來的結果，存成圖片或文字檔
已存成.result檔
