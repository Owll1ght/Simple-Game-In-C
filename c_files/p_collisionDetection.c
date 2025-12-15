bool collide()
{
  float px1,py1,px2,py2,px3,py3,px4,py4;
  float ex1,ey1,ex2,ey2,ex3,ey3,ex4,ey4;
  squareShape(playerSize,p_Pp.x,p_Pp.y,&px1,&py1,&px2,&py2,&px3,&py3,&px4,&py4);
  squareShape(enemySize ,p_e.x ,p_e.y ,&ex1,&ey1,&ex2,&ey2,&ex3,&ey3,&ex4,&ey4);
  // px1 = px4; px2 = px3;
  // py1 = py2; py3 = py4;
  // ex1 = ex4; ex2 = ex3;
  // ey1 = ey2; ey3 = ey4;
  if(py1>=ey3 && py1<=ey1 && px1>=ex1 && px1<=ex2){ printf("Hit 1\n"); return 1; }
  if(py3>=ey3 && py3<=ey1 && px1>=ex1 && px1<=ex2){ printf("Hit 2\n"); return 1; } 
  if(py1>=ey3 && py1<=ey1 && px2>=ex1 && px2<=ex2){ printf("Hit 3\n"); return 1; } 
  if(py3>=ey3 && py3<=ey1 && px2>=ex1 && px2<=ex2){ printf("Hit 4\n"); return 1; } 
  else {return 0;}
}
