#include <stdio.h>
#include <windows.h>
#include "wiatr.h"


int main() {
    SetConsoleOutputCP(CP_UTF8);
    int windSpeed;

    printf("Podaj siłę wiatru (km/h): ");
    scanf("%d", &windSpeed);

    WindStrength strength;

    if (windSpeed < 1) {
        strength = CALM;
    } else if (windSpeed < 6) {
        strength = LIGHT_AIR;
    } else if (windSpeed < 12) {
        strength = LIGHT_BREEZE;
    } else if (windSpeed < 20) {
        strength = GENTLE_BREEZE;
    } else if (windSpeed < 29) {
        strength = MODERATE_BREEZE;
    } else if (windSpeed < 39) {
        strength = STRONG_BREEZE;
    } else if (windSpeed < 50) {
        strength = QUITE_STRONG_BREEZE;
    } else if (windSpeed < 62) {
        strength = VERY_STRONG_BREEZE;
    } else if (windSpeed < 75) {
        strength =  STORM;
    } else if (windSpeed < 89) {
        strength = STRONG_STORM;
    } else if (windSpeed < 104) {
        strength = VERY_STRONG_STORM;
    } else if (windSpeed < 120) {
        strength = VIOLENT_STORM;
    } else {
        strength = HURRICANE;
    }

    const char *description = getWindDescription(strength);
    const char *seaState = getSeaState(strength);

    printf("Opis wiatru: %s\n", description);
    printf("Stan morza: %s\n", seaState);


    return 0;
}