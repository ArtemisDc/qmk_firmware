#pragma once

#include "quantum.h"


#define LAYOUT( \
              K00,                                         K43, \
    K10, K11, K12, K13,                               K50, K51, K52, K53, \
         K21, K22, K23,                               K60, K61, K62, \
                        K02, K03,           K40, K41, \
         K30, K31, K32, K33,                     K70, K71, K72, K73 \
) { \
    {K00,   KC_NO, K02, K03}, \
    {K10,   K11,   K12, K13}, \
    {KC_NO, K21,   K22, K23}, \
    {K30,   K31,   K32, K33}, \
    {K40, K41, KC_NO, K43  }, \
    {K50, K51, K52,   K53  }, \
    {K60, K61, K62,   KC_NO}, \
    {K70, K71, K72,   K73  } \
}
