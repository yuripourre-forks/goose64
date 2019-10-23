
#ifndef CHARACTER_H
#define CHARACTER_H

#include "gameobject.h"
#include "gametypes.h"

void Character_init(Character* self, GameObject* obj, Game* game);
void Character_update(Character* self, Game* game);
void Character_updateState(Character* self, Game* game);
void Character_setTarget(Character* self, GameObject* target);

#ifndef __N64__
void Character_print(Character* self);
#endif

#endif /* !CHARACTER_H */