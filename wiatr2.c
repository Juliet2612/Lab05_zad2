#include "wiatr.h"
const char *getWindDescription(WindStrength strength) {
    switch (strength) {
        case CALM: return "Flauta";
        case LIGHT_AIR: return "Powiew";
        case LIGHT_BREEZE: return "Słaby wiatr";
        case GENTLE_BREEZE: return "Łagodny wiatr";
        case MODERATE_BREEZE: return "Umiarkowany wiatr";
        case STRONG_BREEZE: return "Silny wiatr";
        case QUITE_STRONG_BREEZE: return "Dość silny wiatr";
        case VERY_STRONG_BREEZE: return "Bardzo silny wiatr";
        case STORM: return "Sztorm";
        case STRONG_STORM: return "Silny sztorm";
        case VERY_STRONG_STORM: return "Bardzo silny sztorm";
        case VIOLENT_STORM: return "Gwałtowny sztorm";
        case HURRICANE: return "Huragan";
        default: return "Nieznany";
    }
}

const char *getSeaState(WindStrength strength) {
    switch (strength) {
        case CALM: return "Gładkie morze";
        case LIGHT_AIR: return "Zmarszczki na wodzie";
        case LIGHT_BREEZE: return "Małe falki";
        case GENTLE_BREEZE: return "Duże falki, ich grzbiety mają wygląd szklisty";
        case MODERATE_BREEZE: return "Małe fale, na których grzbietach tworzy się piana. Słychać plusk";
        case STRONG_BREEZE: return "Szum morza przypomina pomruk, wiatr gwiżdże, fale umiarkowane, gęste białe grzebienie";
        case QUITE_STRONG_BREEZE : return "Tworzą się grzywacze, długa wysoka fala, szum morza. Fale z pianą na grzbietach i bryzgi";
        case VERY_STRONG_BREEZE: return "Morze burzy się i piana zaczyna układać się w pasma";
        case STORM: return "Umiarkowanie duże fale z poprzerywanymi obracającymi się grzbietami. Pasma piany";
        case STRONG_STORM: return "Bardzo duże fale z gęstą pianą. Grzbiety fal zaczynają się zawijać. Znaczne bryzgi";
        case VERY_STRONG_STORM: return "Wielkie fale. Powierzchnia morza jest biała, fale przełamują się. Widoczność jest ograniczona";
        case VIOLENT_STORM: return "Nadzwyczaj wielkie fale.";
        case HURRICANE: return "Olbrzymie fale. Powietrze pełne piany i bryzgów. Morze całkowicie białe pokryte bryzgami. Widzialność bardzo ograniczona.";
        default: return "Nieznany";
    }
}