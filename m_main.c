#include <GL/glut.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#include "h_files/p_enemyStateMovement.h"
#include "h_files/p_playerStateMovement.h"
#include "h_files/m_math.h"

#include "c_files/p_playerStateMovement.c"
#include "c_files/p_enemyStateMovement.c"
#include "c_files/d_display.c"

int main
(
 int argc,
 char **argv
){
  glutInit(&argc, argv);
  displayStart();
}
