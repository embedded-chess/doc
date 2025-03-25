float ECPSignalDetection::cumulateInfraredValues(
    bool turnOnIRLight
) {
    // check for interfering infrared signal
    IRMeasurements measurements = measureIR();

    // repeat if interfering signal was measured
    if (measurements.hasSignal()) { /* ... */ }

    if (turnOnIRLight) {
        dezibot.infraredLight.bottom.turnOn();
        delay(DELAY_IR_INTERACTION);

        IRMeasurements measurements = measureIR();

        dezibot.infraredLight.bottom.turnOff();
        delay(DELAY_IR_INTERACTION);

        return measurements.getSum();
    }

    return measurements.getSum();
};
