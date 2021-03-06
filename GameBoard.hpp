#ifndef GAMEBOARD_HPP
#define GAMEBOARD_HPP
#include "HelperFunctions.hpp"
#include <vector>
#include "ChessPieces.hpp"

// Class for the game board.
// Will contain a map as the underlying data structure,
// where each vertex contains a piece information
// and edges connecting vertices are determined by
// if a piece can access that vertex (valid move)

//TODO: Make Matrix for all possible move and on all possible pieces
//TODO: Make GameBoard make moves



class GameBoard
{
public:
    GameBoard();
    std::vector<std::pair<Piece,std::vector<Piece>>> buf;
};

#endif