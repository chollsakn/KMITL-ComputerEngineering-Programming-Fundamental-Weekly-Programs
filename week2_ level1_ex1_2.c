#include <stdio.h>
//จงเขียนโปรแกรมเพื่อรับค่าตัวเลข 2 ตัว แล้วแสดงผลบวก ลบ คูณ หาร ของตัวเลขทั้งสองตัวนั้น โดยใช้ตัวแปรน้อยที่สุด (Level 1)

int main()
{
  double n[2];
  scanf("%lf %lf", &n[0], &n[1]);
  printf("%.1f ", n[0] + n[1]);
  printf("%.1f ", n[0] - n[1]);
  printf("%.1f ", n[0] * n[1]);
  printf("%.1f ", n[0] / n[1]);
  return 0;
}