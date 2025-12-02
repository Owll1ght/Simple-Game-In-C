enemyPosition p_e;
enemyMove m_e;

void enemyMovement()
{
  if(time1>=10){
    m_e.m_ex = 0.0f;
    m_e.m_ex = xymove[rand()%length];
    m_e.m_ey = 0.0f;
    m_e.m_ey = xymove[rand()%length];

    if(m_e.m_ex != 0.0f && m_e.m_ey != 0.0f){
      float magnitude = Q_rsqrt((m_e.m_ex*m_e.m_ex)+(m_e.m_ey*m_e.m_ey));

      m_e.m_ex *= magnitude;
      m_e.m_ey *= magnitude;
    }
    time1=0;    
  } 
  time1++;

  // printf("Ex = %d, Ey = %d\n",p_e.ex,p_e.ey);
  // printf("SpeedX = %f, SpeedY = %f\n",m_e.m_ex,m_e.m_ey);
  p_e.ex += m_e.m_ex * enemySpeed;
  p_e.ey += m_e.m_ey * enemySpeed;

  if(p_e.ex < 0){ p_e.ex = 0; }
  if(p_e.ey < 0){ p_e.ey = 0; }
  if(p_e.ex > 1024){ p_e.ex = 1024; }
  if(p_e.ey > 512 ){ p_e.ey = 512;  }
}

void drawEnemy()
{
  float x1,y1,x2,y2,x3,y3,x4,y4;
  squareShape(enemySize,p_e.ex,p_e.ey,&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4); 
  glColor3f(1,0,0);
  glPointSize(8);
  glBegin(GL_POINTS);
  glVertex2i(p_e.ex,p_e.ey);
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
  p_e.ex = 300;
  p_e.ey = 300;
}
