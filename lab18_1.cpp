#include<iostream>
#include<algorithm>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect a, Rect b){
  double ix = min(a.x+a.w, b.x+b.w) - max(a.x, b.x);
  double iy = min(a.y, b.y) - max(a.y-a.h,b.y-b.h);
  if (min(ix, iy) > 0) return ix * iy;
  return 0;
}

int main() {
  Rect R1 = {1,1,5,5};
  Rect R2 = {7,2,3,3};
  overlap(R1, R2);
}
