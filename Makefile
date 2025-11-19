all: clean test

appTests: test.cpp catch_amalgamated.cpp
	g++ -Wall --std=c++17 test.cpp catch_amalgamated.cpp -o appTests

appMain: main.cpp
	g++ -Wall --std=c++17 main.cpp -o appMain

test: appTests
	# executes all tests
	./appTests

run: appMain
	./appMain

clean:
	rm -f appTests appMain