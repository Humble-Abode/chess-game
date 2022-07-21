CXXFLAGS=-ggdb -std=c++11 -Wpedantic -Wall -Wextra -Werror -Wzero-as-null-pointer-constant

all: main tester

main: main.cpp
	g++ $(CXXFLAGS) main.cpp -o main
tester: tester.cpp
	g++ $(CXXFLAGS) GameBoard.cpp HelperFunctions.cpp ChessPieces.cpp tester.cpp -o tester
clean:
	rm main tester