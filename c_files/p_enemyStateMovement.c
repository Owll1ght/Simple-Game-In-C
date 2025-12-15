entityPosition p_e;
entityMove m_e;

void enemyMovement()
{
  if(time1>=10){
    m_e.mx = 0.0f;
    m_e.mx = xymove[rand()%length];
    m_e.my = 0.0f;
    m_e.my = xymove[rand()%length];

    if(m_e.mx != 0.0f && m_e.my != 0.0f){
      float magnitude = Q_rsqrt((m_e.mx*m_e.mx)+(m_e.my*m_e.my));

      m_e.mx *= magnitude;
      m_e.my *= magnitude;
    }
    time1=0;    
  } 
  time1++;

  // printf("Ex = %d, Ey = %d\n",p_e.ex,p_e.ey);
  // printf("SpeedX = %f, SpeedY = %f\n",m_e.m_ex,m_e.m_ey);
  p_e.x += m_e.mx * enemySpeed;
  p_e.y += m_e.my * enemySpeed;

  if(p_e.x < 0){ p_e.x = 0; }
  if(p_e.y < 0){ p_e.y = 0; }
  if(p_e.x > 1024){ p_e.x = 1024; }
  if(p_e.y > 512 ){ p_e.y = 512;  }
}

void drawEnemy()
{
  float x1,y1,x2,y2,x3,y3,x4,y4;
  squareShape(enemySize,p_e.x,p_e.y,&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4); 
  glColor3f(1,0,0);
  glPointSize(8);
  glBegin(GL_POINTS);
  glVertex2i(p_e.x,p_e.y);
  glEnd();
  glBegin(GL_LINE_LOOP);
  glVertex2i(x1,y1);
  glVertex2i(x2,y2);
  glVertex2i(x3,y3);
  glVertex2i(x4,y4);
  glEnd();
}

void initEnemy()
{
  p_e.x = enemyPositionX;
  p_e.y = enemyPositionY;
}
