Keyboard K;
entityPosition p_Pp;
entityMove p_Mv;

void buttonsDown
(
 unsigned char key,
 int x,
 int y
){
  if(key=='w'==1){K.w = 1;}
  if(key=='a'==1){K.a = 1;}
  if(key=='s'==1){K.s = 1;}
  if(key=='d'==1){K.d = 1;}
}

void buttonsUp
(
 unsigned char key,
 int x,
 int y
){
  if(key=='w'==1){K.w = 0;}
  if(key=='a'==1){K.a = 0;}
  if(key=='s'==1){K.s = 0;}
  if(key=='d'==1){K.d = 0;}
}

void playerMovement()
{
  p_Mv.mx = 0.0f;
  p_Mv.my = 0.0f;

  if(K.w>=1){ p_Mv.my-=1.0f; }
  if(K.a>=1){ p_Mv.mx-=1.0f; }
  if(K.s>=1){ p_Mv.my+=1.0f; }
  if(K.d>=1){ p_Mv.mx+=1.0f; }

  if(p_Mv.my != 0.0f && p_Mv.mx != 0.0f){
    float magnitude = Q_rsqrt((p_Mv.mx*p_Mv.mx)+(p_Mv.my*p_Mv.my));

    p_Mv.my *= magnitude;
    p_Mv.mx *= magnitude;
  }

  p_Pp.x += p_Mv.mx * speed;
  p_Pp.y += p_Mv.my * speed;

  if(p_Pp.x < 0){ p_Pp.x = 0; }
  if(p_Pp.y < 0){ p_Pp.y = 0; }
  if(p_Pp.x > 1024){ p_Pp.x = 1024; }
  if(p_Pp.y > 512 ){ p_Pp.y = 512;  }
  
}

void drawPlayer()
{
  float x1,y1,x2,y2,x3,y3,x4,y4;
  squareShape(playerSize,p_Pp.x,p_Pp.y,&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
  glColor3f(0,1,0);
  glPointSize(3);
  glBegin(GL_POINTS);
  glVertex2i(p_Pp.x,p_Pp.y);
  glEnd();
  glBegin(GL_LINE_LOOP);
  glVertex2i(x1,y1);
  glVertex2i(x2,y2);
  glVertex2i(x3,y3);
  glVertex2i(x4,y4);
  glEnd();
}

void initPlayer()
{
  p_Pp.x = playerPositionX;
  p_Pp.y = playerPositionY;
}
