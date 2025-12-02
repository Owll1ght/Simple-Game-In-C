typedef struct {
  int ex, ey;
} enemyPosition;

typedef struct {
  float m_ex, m_ey;
} enemyMove;

const float xymove[4] = {-1.0f,0.0f,1.0f,0.0f};

const int length = sizeof(xymove) / sizeof(xymove[0]);
