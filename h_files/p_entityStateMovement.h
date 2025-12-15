int time1;

typedef struct {
  int w;
  int a;
  int s;
  int d;
} Keyboard; 

typedef struct {
  float x, y;
} entityPosition; 

typedef struct {
  float mx,my;
} entityMove;

const float xymove[4] = {-1.0f,0.0f,1.0f,0.0f};

const int length = sizeof(xymove) / sizeof(xymove[0]);
