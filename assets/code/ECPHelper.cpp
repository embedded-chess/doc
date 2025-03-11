enum ECPBoardColumn {
    A, B, C, D, E, F, G, H
};

struct ECPChessField {
    ECPBoardColumn column
    unsigned int row
    
    String toString() const
};

enum ECPDirection {
    NORTH, EAST, SOUTH, WEST
};