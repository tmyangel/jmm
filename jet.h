#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "def.h"

typedef struct ALIGN(16) jet {
  dbl f, fx, fy, fxy;
} jet_s;

#ifdef __cplusplus
}
#endif
