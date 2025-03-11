class ECPMovement {
    ECPMovement(
        Dezibot &dezibot,
        uint movementCalibration = /* default */
    );

    void move(uint numberOfFields);
    void turnLeft(
        ECPChessField currentField,
        ECPDirection intendedDirection
    );
    void turnRight(
        ECPChessField currentField,
        ECPDirection intendedDirection
    );

    // protected
    Dezibot &dezibot;
    ECPColorDetection ecpColorDetection;
    ECPSignalDetection ecpSignalDetection;
    const uint movementCalibration;
};
