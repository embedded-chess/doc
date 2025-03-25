bool ECPColorDetection::isWhiteField() {
    ColorSensor cs = dezibot.colorSensor; // (verkürzt)

    double a = cs.getNormalizedAmbientValue();
    double r = cs.getNormalizedColorValue(ColorSensor::RED, a);
    double g = cs.getNormalizedColorValue(ColorSensor::GREEN, a);
    double b = cs.getNormalizedColorValue(ColorSensor::BLUE, a);
    double brightness = cs.calculateBrightness(r, g, b);

    return brightness >= IS_WHITE_FIELD_THRESHOLD;
};
