#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *a, Rect *b){
  double ix = min(a->x+a->w, b->x+b->w) - max(a->x, b->x);
  double iy = min(a->y, b->y) - max(a->y-a->h,b->y-b->h);
  if (min(ix, iy) > 0) return ix * iy;
  return 0;
}


