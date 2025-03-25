void ECPColorDetection::calibrateFieldColor() {
    double minWhiteBrightness = MAX_NORMALIZED_COLOR_VALUE;
    double maxBlackBrightness = 0.0;

    for (size_t i = 0; i < CALIBRATE_FIELD_COUNT; i++) {
        const double whiteBrightness = 
            calibrateAndMeasureColor(true);
        const double blackBrightness = 
            calibrateAndMeasureColor(false);

        if (whiteBrightness < minWhiteBrightness) {
            minWhiteBrightness = whiteBrightness;
        }
        if (maxBlackBrightness < blackBrightness) {
            maxBlackBrightness = blackBrightness;
        }
    }

    double offsetWhite = 
        minWhiteBrightness * THRESHOLD_OFFSET;
    double offsetBlack = 
        maxBlackBrightness * 2 * THRESHOLD_OFFSET;

    thresholdIsWhiteField = minWhiteBrightness - offsetWhite;
    thresholdIsBlackField = maxBlackBrightness + offsetBlack;
};
