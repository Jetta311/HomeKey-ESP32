#include "Fingerprint.h"

Fingerprint::Fingerprint() : finger(&Serial2) {}

void Fingerprint::begin() {
    finger.begin(57600);
}

bool Fingerprint::enrollFingerprint(uint8_t id) {
    // Enrollment logic here
    return true; // Return true if successful
}

int Fingerprint::getFingerprintID() {
    if (finger.getImage() != FINGERPRINT_OK) return -1;
    if (finger.image2Tz() != FINGERPRINT_OK) return -1;
    if (finger.fingerFastSearch() != FINGERPRINT_OK) return -1;
    return finger.fingerID;
