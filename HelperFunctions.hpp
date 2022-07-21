#ifndef HELPERFUNCTIONS_HPP
#define HELPERFUNCTIONS_HPP

#include <iostream>
#include <string>
// #include <cstdio>

// TODO:
// * finish vertexToCoordinate

// this is all the declarations:

// basic print function const char
void print(const char * text = "");

// basic print function
void print(std::string text);

// vertexToCoordinate takes in a vertex and returns
// a coordinate representing chess board
std::string vertexToCoordinate(int vertex);


#endif