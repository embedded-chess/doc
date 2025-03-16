class ECPChessPiece {
    ECPChessPiece(
        Dezibot &dezibot,
        ECPMovement &ECPMovement,
        ECPChessField initialField,
        bool isWhite,
    );

    bool isMoveValid(ECPChessField newField);
    bool move(ECPChessField newField);
    ECPChessField getCurrentField();
    void drawFigureToDisplay();
    
    const bool isWhite;
    Dezibot& dezibot;

    // protected
    ECPChessField currentField;
    ECPMovement& ecpMovement;

    // private
    ECPDirection currentDirection;
};
