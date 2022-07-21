// Tester file purely for debug purposes

// included debug files
#include "ChessPieces.hpp"



int main()
{
    print();
    print("testing construction of gameboard");
    GameBoard testBoard;

    print();
    print("testing construction for piece class");
    Piece testPiece(testBoard);

    print();
    return 0;
}