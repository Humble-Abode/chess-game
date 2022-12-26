#ifndef GAMEBOARD_HPP
#define GAMEBOARD_HPP
#include "HelperFunctions.hpp"
#include <vector>
#include "ChessPieces.hpp"
#include <map>

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

    //std::vector<std::pair<Piece,std::vector<Piece>>> buf;
    //map of piece and coordinates
    std::map<Piece,std::vector<Piece>> moves;
    board[7][7];

    //reset board 
    void resetBoard(){

    }

    //print board with an array to visualize in 2D
    void printBoard(){
        for(int i; i< 7;i++){
            for(int)
        }
        std::cout<
    }



};

#endif