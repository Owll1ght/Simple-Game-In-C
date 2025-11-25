#include <GL/glut.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#include "p_enemyStateMovement.h"
#include "p_playerStateMovement.h"
#include "m_math.h"

#include "p_playerStateMovement.c"
#include "p_enemyStateMovement.c"
#include "d_display.c"

int main
(
 int argc,
 char **argv
){
  glutInit(&argc, argv);
  displayStart();
}
