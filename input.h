
#ifndef INPUT_H
#define INPUT_H

#include "vec2d.h"

typedef struct Input {
  Vec2d direction;
} Input;

void Input_init(Input* self);

#endif /* !INPUT_H */