practica4: obj/semantica.o obj/main.o obj/esp_sint.tab.o
	gcc -o bin/practica4 obj/semantica.o obj/main.o obj/esp_sint.tab.o

obj/main.o: src/main.c
	gcc -o $@ -c src/main.c -Iinclude

obj/esp_sint.tab.o: src/esp_sint.tab.c
	gcc -o $@ -c src/esp_sint.tab.c -Iinclude

src/esp_sint.tab.c: src/esp_sint.y src/lex.yy.c
	bison -v -d -o $@ src/esp_sint.y

src/lex.yy.c: src/esp_lexica.l
	flex src/esp_lexica.l
	mv lex.yy.c src

obj/semantica.o: src/semantica.c
	gcc -o $@ -c src/semantica.c -Iinclude

all:
	make practica4

clean:
	rm -rf bin/practica4 obj/* src/esp_sint.tab.c src/lex.yy.c
	rm -rf bin/practica4.exe

