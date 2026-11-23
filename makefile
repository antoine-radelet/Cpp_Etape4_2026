Test4:	Test4.cpp Event.o Time.o Timing.o
	g++  Test4.cpp Event.o Time.o Timing.o -o Test4

Event.o:	Event.cpp Event.h
	g++ Event.cpp -c

Time.o:	Time.cpp Time.h
	g++	Time.cpp -c

Timing.o:	Timing.cpp Timing.h Time.h
	g++ Timing.cpp -c