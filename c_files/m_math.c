float Q_rsqrt( float number )
{
  long i;
  float x2, y;
  const float threehalfs = 1.5f;

  x2 = number*0.5f;
  y = number;
  i = *(long*) &y;
  i = 0x5f3759df - ( i>>1 );
  y = *(float*) &i;
  y = y * (threehalfs - (x2*y*y));
  y = y * (threehalfs - (x2*y*y));

  return y;
}

void squareShape
(
 int size, 
 float pos_x, 
 float pos_y, 
 float* x1, 
 float* y1,
 float* x2,
 float* y2,
 float* x3,
 float* y3,
 float* x4,
 float* y4
)
{
  float r_size = (int)size>>1;
  *x1 = pos_x-r_size;
  *y1 = pos_y+r_size;
  *x2 = pos_x+r_size;
  *y2 = pos_y+r_size;
  *x3 = pos_x+r_size;
  *y3 = pos_y-r_size;
  *x4 = pos_x-r_size;
  *y4 = pos_y-r_size;
}
