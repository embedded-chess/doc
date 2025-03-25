void ECPColorDetection::calibrateIRFieldColor() {
    const float irWhiteVal = calibrateAndMeasureIRColor(true);
    const float irBlackVal = calibrateAndMeasureIRColor(false);

    float diff =  irWhiteVal - irBlackVal;
    float offset = diff * THRESHOLD_OFFSET_IR;

    thresholdIsIRWhiteField = irWhiteVal - offset;
    thresholdIsIRBlackField = irBlackVal + offset;
};
