#define speed 8

int time1;
const int playerSize = 16;

typedef struct {
  int w;
  int a;
  int s;
  int d;
} Keyboard; 

typedef struct {
  float px, py;
} playerPosition; 

typedef struct {
  float mx,my;
} playerMove;
