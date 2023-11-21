
typedef enum {
    CALM,
    LIGHT_AIR,
    LIGHT_BREEZE,
    GENTLE_BREEZE,
    MODERATE_BREEZE,
    STRONG_BREEZE,
    QUITE_STRONG_BREEZE,
    VERY_STRONG_BREEZE,
    STORM,
    STRONG_STORM,
    VERY_STRONG_STORM,
    VIOLENT_STORM,
    HURRICANE
} WindStrength;

const char *getWindDescription(WindStrength strength);
const char *getSeaState(WindStrength strength);
