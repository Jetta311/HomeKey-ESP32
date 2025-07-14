#ifndef FINGERPRINT_H
#define FINGERPRINT_H

#include <Adafruit_Fingerprint.h>
#include <HardwareSerial.h>

class Fingerprint {
public:
    Fingerprint();
    void begin();
    bool enrollFingerprint(uint8_t id);
    int getFingerprintID();
    bool deleteFingerprint(uint8_t id);
private:
    Adafruit_Fingerprint finger;
};

#endif
