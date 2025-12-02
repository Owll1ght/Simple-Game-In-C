typedef struct {
  int fr1,fr2;
} Time; Time T;

void display()
{
  if(T.fr1-T.fr2>=40){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    playerMovement();
    enemyMovement();
    collide();
    drawPlayer();
    drawEnemy();

    T.fr2=T.fr1;
    glutSwapBuffers();
  }

  T.fr1 = glutGet(GLUT_ELAPSED_TIME);
  glutPostRedisplay();
}

void initDisplay()
{
  glClearColor(0.5,0.5,0.5,0.0);
  gluOrtho2D(0,1024,512,0);
  initEnemy();
  initPlayer();
}

void displayStart()
{
  glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
  glutInitWindowSize(1024,512);
  glutCreateWindow("Simple Game");
  initDisplay();
  glutDisplayFunc(display);
  glutKeyboardFunc(buttonsDown);
  glutKeyboardUpFunc(buttonsUp);
  glutMainLoop();
}
