

#include "ChessPieces.hpp"

Piece::Piece(GameBoard& board)
    : board(board)
{
    std::cout << "DEBUG: should be the default constructor for piece" << std::endl;
}


void Pawn::move()
{

}