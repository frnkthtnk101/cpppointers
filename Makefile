cc = g++


pointers: pointers.cpp
	$(cc) -O1  ./pointers.cpp -o pointers 
list:
	$(cc) -S -fverbose-asm -g -O1 pointers.cpp -o point.s
	as -alhnd point.s > point.lst