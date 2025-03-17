bool ECPColorDetection::isWhiteField() {
    double ambient = 
        dezibot.colorSensor.getNormalizedAmbientValue();
    double red = 
        dezibot.colorSensor.getNormalizedColorValue(/* ... */);
    double green = 
        dezibot.colorSensor.getNormalizedColorValue(/* ... */);
    double blue = 
        dezibot.colorSensor.getNormalizedColorValue(/* ... */);

    double brightness = 
        dezibot.colorSensor.calculateBrightness(red, green, blue);

    return brightness >= IS_WHITE_FIELD_THRESHOLD;
};
