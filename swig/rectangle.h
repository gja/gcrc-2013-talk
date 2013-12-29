#ifdef SWIG
%module rectangle
%{
#include "rectangle.h"
%}
#endif

class Rectangle
{
  int width;
  int height;

public:
  Rectangle(int width, int height);
  int area();
};
