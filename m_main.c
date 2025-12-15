#include <GL/glut.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <stdio.h>

#include "h_files/p_entityStateMovement.h"
#include "h_files/i_init.h"

#include "c_files/m_math.c"
#include "c_files/p_playerStateMovement.c"
#include "c_files/p_enemyStateMovement.c"
#include "c_files/p_collisionDetection.c"
#include "c_files/d_display.c"

int main
(
 int argc,
 char **argv
){
  glutInit(&argc, argv);
  displayStart();
  return 0;
}
