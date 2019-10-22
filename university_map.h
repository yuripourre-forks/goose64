
#ifndef UNIVERSITY_MAP_H
#define UNIVERSITY_MAP_H 1
#include "gameobject.h"

GameObject university_map_data[] = {
    {0, {0.000000, 0.000000, -0.000000}, 0.000000, UniFloorModel},
    {1, {-115.841489, 11.748462, 280.581837}, 0.000000, BushModel},
    {2, {109.156330, 0.000000, -0.000000}, 0.000000, GooseModel},
    {3, {-27.783580, 11.748465, 240.390844}, 0.000000, BushModel},
    {4, {0.000000, 11.748462, -0.000000}, 0.000000, BushModel},
    {5, {235.911956, 11.748462, 629.936428}, 0.000000, BushModel},
    {6, {323.969879, 11.748465, 589.745407}, 0.000000, BushModel},
    {7, {-2178.357468, 171.918898, -0.000000}, 0.000000, UniBldgModel},
    {8, {-2178.357468, 171.918898, -1338.117714}, 0.000000, UniBldgModel},
    {9, {-2178.357468, 171.918898, -2755.710754}, 0.000000, UniBldgModel},
    {10, {-2178.357468, 171.918898, 2509.864197}, 0.000000, UniBldgModel},
    {11, {-1231.426163, 171.918898, 3616.849594}, 90.000003, UniBldgModel},
    {12, {756.905136, 171.918898, 3673.193665}, 90.000003, UniBldgModel},
    {13, {2174.508591, 171.918898, 2509.864197}, 0.000000, UniBldgModel},
    {14, {2174.508591, 171.918898, -2755.710754}, 0.000000, UniBldgModel},
    {15, {2174.508591, 171.918898, -1338.117714}, 0.000000, UniBldgModel},
    {16, {2174.508591, 171.918898, -0.000000}, 0.000000, UniBldgModel},
    {17, {-1.470068, -0.000014, -341.645737}, 0.000000, FlagpoleModel},
    {18, {864.730911, 30.365109, -667.521343}, 0.000000, BookItemModel},
    {19, {-217.429504, 30.365109, -667.521343}, 0.000000, HomeworkItemModel},
    {20, {547.034283, 11.748490, -836.690655}, 0.000000, BushModel},
    {21, {524.890366, 11.748489, -920.066471}, 0.000000, BushModel},
    {22,
     {667.252121, 65.003729, -793.542194},
     0.000000,
     GroundskeeperCharacterModel},

};

#define UNIVERSITY_MAP_COUNT 23

#endif /* UNIVERSITY_MAP_H */