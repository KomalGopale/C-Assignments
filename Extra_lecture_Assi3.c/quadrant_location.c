/*program to accecpt a coordinate point in (x,y) coordinate system 
                                         to determine in which quadrant that point lies*/
#include <stdio.h>
int main()
{
  int x,y;
  printf("Enter value for X coordinate: ");
  scanf("%d",&x);
  printf("Enter value for Y coordinate: ");
  scanf("%d",&y);
  if(x > 0 && y > 0)
  {
      printf("The coordinate point (%d,%d) lies in the first quadrant\n",x,y);
  }
  else if(x < 0 && y > 0)
  {
      printf("The coordinate point (%d,%d) lies in the second quadrant",x,y);
  }
  else if(x < 0 && y < 0)
  {
      printf("The coordinate point (%d,%d) lies in the third quadrant",x,y);
  }
  else if(x > 0 && y < 0)
  {
      printf("The coordinate point (%d,%d) lies in the fourth quadrant",x,y); 
  }
  else if(x == 0 && y == 0)
  {
      printf("The coordinate point (%d,%d) lies at the origin",x,y);
  }
  else if(x == 0 && y < 0)
  {
      printf("The coordinate point (%d,%d) lies on negative y-axis",x,y);
  }
  else if(x == 0 && y > 0)
  {
      printf("The coordinate point (%d,%d) lies on positive y-axis",x,y);
  }
  else if(x < 0 && y == 0)
  {
      printf("The coordinate point (%d,%d) lies on negative x-axis",x,y);
  }
  else
      printf("The coordinate point (%d,%d) lies on positive x-axis",x,y); 
  return 0;
}