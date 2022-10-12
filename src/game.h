#include <SDL.h>

#define CUBE_FACE_POINTS_N 4
#define CUBE_FACE_N 6
#define CUBE_POINTS_N 24  // 6 * 4

typedef struct {
  float z;
} Player;

typedef struct Point {
  float x;
  float y;
  float z;
} Point;

typedef struct {
} Block;

typedef Point Cube[CUBE_POINTS_N];

void gameFrame(SDL_Event e, float deltaTime);