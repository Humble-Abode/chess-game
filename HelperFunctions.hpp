#ifndef HELPERFUNCTIONS_HPP
#define HELPERFUNCTIONS_HPP

#include <iostream>
#include <string>
#include <cstdio>

// this is all the declarations:

// basic print function
void print(const char * text = "");

// vertexToCoordinate takes in a vertex and returns
// a coordinate representing chess board
std::string vertexToCoordinate(int vertex);

// this is all the definitions:

void print(const char * text)
{
    std::cout << text << std::endl;
}

std::string vertexToCoordinate(int vertex)
{
    std::string returnCoordinate;
    
}

#endif