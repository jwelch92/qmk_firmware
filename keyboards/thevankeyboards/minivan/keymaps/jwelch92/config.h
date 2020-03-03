#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#ifndef PERMISSIVE_HOLD
#define PERMISSIVE_HOLD
#endif

#include "../../config.h"

// place overrides here
#ifdef BACKLIGHT_ENABLE
    #define BACKLIGHT_PIN B2
    #define BACKLIGHT_LEVELS 7
#endif

#endif
