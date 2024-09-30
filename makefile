cxx_std = -std=c++23

main: main.o
	g++ $(cxx_std) main.o -o main

main.o: main.cpp
	g++ $(cxx_std) -c main.cpp

clean:
	rm -rf *.o
	rm -f main

.PHONY: clean
