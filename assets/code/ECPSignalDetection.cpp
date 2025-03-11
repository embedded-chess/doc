class ECPSignalDetection {
    ECPSignalDetection(Dezibot &dezibot);

    int measureSignalAngle();
    int measureDezibotAngle();

    // protected
    Dezibot& dezibot;
};
