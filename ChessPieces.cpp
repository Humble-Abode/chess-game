---------------
#include "ChessPieces.hpp"

Piece::Piece(int x, int y, std::string color)
    : x(x), y(y), color(color)
{
    std::cout << "DEBUG: should be the default constructor for piece" << std::endl;

    std::cout << "DEBUG: should be x coordinate: " << x << std::endl;
    std::cout << "DEBUG: should be y coordinate: " << y << std::endl;
    std::cout << "DEBUG: should be the color (either black or white) " << color << std::endl;
}

bool Piece::insideBoard(int x, int y)
{
    return (x >= 0 && x <= 7 && y >= 0 && y <= 7);
}

Pawn::Pawn(int x, int y, std::string color)
    : hasMoved(false), Piece(x, y, color)
{
    std::cout << "DEBUG: inside the pawn constructor" << std::endl;


}

void Pawn::move(int chosenX, int chosenY)
{
    // vector of all possible moves it can have!
    std::vector<std::pair<int, int>> possibleMoves;

    // note : it's not possible for a pawn to be at the end of the board!!
    // it would have to promote, so we don't need to consider this edge case!

    // firstly we're putting all the 1 move pieces inside the board...
    // black should move the pieces down
    // also check if theres a piece blocking the pawn!! (TODO)
    if (color == "black")
    {
        possibleMoves.push_back(std::pair<int, int>(x, y-1));
    }
    // white should move the pieces up
    else if (color == "white")
    {
        possibleMoves.push_back(std::pair<int, int>(x, y+1));
    }
    // should NEVER hit this case
    else
    {
        std::cout << "DEBUG: this case should NEVER be hit!!" << std::endl;
    }

    // we want to allow it to move twice if the pawn has not moved
    if (!hasMoved)
    {
        // write all the possible moves here
        if (insideBoard(x, y) )
        {
            if (color == "black")
        {

        }
        // white should move the pieces up
        else if (color == "white")
        {

        }
        }

        // perhaps make a pair and check to see if its in the vector of possible moves
        // TODO optimization idea: make a hash table! right now I'm going to use a
        // vector since its much faster to implement


    }
    // corresponding to if the piece has moved before!
    else
    {
        
    }


    // for signifyign if pawn has moved
    if (!hasMoved)
    {
        hasMoved = true;
    }
}

