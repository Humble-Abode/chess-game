// This will be the modules that contain the chess pieces

// Class for pawn.
// Can only move forward, can only capture diagonal.
// If the pawn hasn't moved, it can move forward 2 spaces.
// Once it reaches the end, it can promote to ANY piece.
class Pawn 
{
    void move();
};

// Class for knight
// Can only move in L-shapes
// Can jump over pieces

class Knight
{
    void move();
};

// Class for bishop
// Can only move and capture diagonally
class Bishop
{
    void move();
};

// Class for rook
// Can only move and capture horizontally
// Can "castle" with king
class Rook
{
    void move();
};

// Class for queen
// Caan move and capture horizontally and vertically
class Queen
{
    void move();
};

// Class for king
// Can move and capture horizontally and vertically, but only one square
// Cannot move itself into a square that would get itself captured on the next move
// Can "Castle" with the rook
class King
{
    void move();
};
