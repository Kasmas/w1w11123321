CFLAGS = -Wall -Werror -MP -MMD
SOURCES = src/Source.c src/Calc.h
.PHONY: clean all Calc test

all :
	make bin/Calc

bin/Calc : build/Source.o
	gcc build/Source.o -o bin/Calc $(CFLAGS)

build/Source.o : src/Source.c src/Calc.h
	gcc -c src/Source.c -o build/Source.o $(CFLAGS)

test:
	make bin/calc-test
	bin/calc-test

bin/calc-test : build/test/main.o build/test/calc-test.o
	gcc build/test/main.o build/test/calc-test.o -o bin/Calc-test $(CFLAGS)

build/test/main.o : src/Calc.h test/main.c
	gcc -I thirdparty -c test/main.c -o build/test/main.o $(CFLAGS)
	gcc -c src/Source.c -o build/test/Source.o $(CFLAGS) 

build/test/calc-test.o : src/Calc.h test/calc-test.c
	gcc -c -I thirdparty test/calc-test.c -o build/test/calc-test.o $(CFLAGS)

build/test/Source.o : src/Calc.h src/Source.c
	gcc -c src/Source.c -o build/test/Source.o $(CFLAGS)

clean :
	@rm -rf build/*.d build/test/*.d 
	@rm -rf build/*.o build/test/*.o
	@rm bin/Calc bin/calc-test
	@echo "All files have been cleaned."
	
-include build/*.d
