/*program to find velocity after time (t) if initial velocity(u) and accleration(a) is known*/
#include <stdio.h>
int main()
{
  float u, a, t, v;
  printf("Enter initial velocity in SI units: ");
  scanf("%f",&u);
  printf("Enter accelaration in SI units: ");
  scanf("%f",&a);
  printf("Enter time after which velocity to be computed: ");
  scanf("%f",&t);
  v = u+a*t;
  printf("velocit of object after time t: %f",v);
  return 0;
}