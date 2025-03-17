bool ECPColorDetection::isWhiteField() {
    double ambient = dezibot.colorSensor.getNormalizedAmbientValue();
    double red = dezibot.colorSensor.getNormalizedColorValue(ColorSensor::RED, ambient);
    double green = dezibot.colorSensor.getNormalizedColorValue(ColorSensor::GREEN, ambient);
    double blue = dezibot.colorSensor.getNormalizedColorValue(ColorSensor::BLUE, ambient);

    double brightness = dezibot.colorSensor.calculateBrightness(red, green, blue);

    return brightness >= IS_WHITE_FIELD_THRESHOLD;
};
