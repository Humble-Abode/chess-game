#ifndef CHESSPIECES_HPP
#define CHESSPIECES_HPP

// This will be the modules that contain the chess pieces
#include "HelperFunctions.hpp"

// DEBUG includes:
#include <iostream>


// TODO:
// * find a way to hold coordinate info

// Class for piece of the board.
// Will be inherited.
class Piece
{
    public:
    // default constructor for all pieces
    Piece();

    // hold coordinate info

};

// Class for pawn.
// Can only move forward, can only capture diagonal.
// If the pawn hasn't moved, it can move forward 2 spaces.
// Once it reaches the end, it can promote to ANY piece.
class Pawn : public Piece 
{
    void move();
    
};

// Class for knight
// Can only move in L-shapes
// Can jump over pieces
class Knight : public Piece
{
    void move();
};

// Class for bishop
// Can only move and capture diagonally
class Bishop : public Piece
{
    void move();
};

// Class for rook
// Can only move and capture horizontally
// Can "castle" with king
class Rook : public Piece
{
    void move();
};

// Class for queen
// Caan move and capture horizontally and vertically
class Queen : public Piece
{
    void move();
};

// Class for king
// Can move and capture horizontally and vertically, but only one square
// Cannot move itself into a square that would get itself captured on the next move
// Can "Castle" with the rook
class King : public Piece
{
    void move();
};

#endif